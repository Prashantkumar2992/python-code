#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<omp.h>
int main(void)
{
        int a = 100;

        #pragma omp parallel for
        for(int i = 0; i< 10; i++)
        {
                if(0 == omp_get_thread_num())
                {
                        a++;
                        #pragma omp flush
                }
                else
                {
                        sleep(1);
                        printf("a is %d\n",a);
                }
        }

        return 0;

}


/*
OUTPUT
[user21@shavak OPENMP]$ vim flush.c
[user21@shavak OPENMP]$ gcc -fopenmp flush.c
[user21@shavak OPENMP]$ ./a.out
a is 103
a is 103
a is 103
a is 103
a is 103
a is 103
a is 103
[user21@shavak OPENMP]$ 

*/
