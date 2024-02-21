#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(int argc, char* argv[])
{
        int val=0;
        int val1=9886;
        int x=345;
        int y=1;
        #pragma omp parallel shared(val)
        {
                if(omp_get_thread_num()==0)
                        {
                                printf("Thread 0 sets the value of \"val\" to 123\n");
                                val=123;
                                x=2;
                                y=665;
                        }

        #pragma omp parallel default(shared)
        {
                printf("val = %d\n",val);
        printf("val1=%d\n",val1);

        }
        #pragma omp barrier
                if(omp_get_thread_num()==1)
                {
                        printf("Thread 1 reads the value of \"val\": %d\n \"X\" %d\n \"Y\" %d \n", val,x,y);
                }
        }
printf("val= %d\n",val);
printf("X= %d\n",x);
printf("Y= %d\n",y);
return 0;
}
  

/*
OUTPUT

[user21@shavak OPENMP]$ vim value.c
[user21@shavak OPENMP]$ gcc -fopenmp value.c
[user21@shavak OPENMP]$ ./a.out
Thread 0 sets the value of "val" to 123
val = 123
val1=9886
val = 0
val1=9886
val = 0
val1=9886
val = 0
val1=9886
Thread 1 reads the value of "val": 123
 "X" 2
 "Y" 665 
val= 123
X= 2
Y= 665
[user21@shavak OPENMP]$ 

*/
