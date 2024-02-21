#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main()
{
        int a=123;
        #pragma omp parallel default(none) firstprivate(a)
        {
                printf("Thread %d a=%d.\n",omp_get_thread_num(),a);
                #pragma omp barrier
                #pragma  omp single copyprivate(a)  // We can remove copyprivate(a) also and can see the changes in the output 
                {
                        a=456;
                        printf("Thread %d executes the single construct and changes a to %d.\n", omp_get_thread_num(),a);

                }

                printf("Thread %d a=%d\n",omp_get_thread_num(),a);

        }

        return 0;

}

/* 

OUTPUT
[user21@shavak OPENMP]$ vim copyprivate.c 
[user21@shavak OPENMP]$ gcc -fopenmp copyprivate.c 
[user21@shavak OPENMP]$ ./a.out
Thread 1 a=123.
Thread 2 a=123.
Thread 3 a=123.
Thread 0 a=123.
Thread 0 executes the single construct and changes a to 456.
Thread 0 a=456
Thread 3 a=456
Thread 2 a=456
Thread 1 a=456
[user21@shavak OPENMP]$ 

*/
