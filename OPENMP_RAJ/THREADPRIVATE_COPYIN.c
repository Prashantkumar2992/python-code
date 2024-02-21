#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int a = 12345;
#pragma omp threadprivate(a)
int main(int argc,char* argv[])
{
        // Turn off dynamic threads as required by threadprivate 
        omp_set_dynamic(0);
        #pragma omp parallel copyin(a)
        {
                #pragma omp master 
                {
                        printf("[First parallel region] Master thread changes the value of a to 67890.\n");
                        a = 67890;
                }
                #pragma omp barrier 
                printf("[First parallel region] Thread %d: a = %d.\n", omp_get_thread_num(),a);
        }
        #pragma omp parallel copyin(a)
        {
                printf("[Second parallel region] Thread %d: a = %d.\n", omp_get_thread_num(),a);
        }
        return 0;
} 


/*
OUTPUT
[user21@shavak OPENMP]$ vim copy.c
[user21@shavak OPENMP]$ gcc -fopenmp copy.c
[user21@shavak OPENMP]$ ./a.out
[First parallel region] Master thread changes the value of a to 67890.
[First parallel region] Thread 0: a = 67890.
[First parallel region] Thread 3: a = 12345.
[First parallel region] Thread 1: a = 12345.
[First parallel region] Thread 2: a = 12345.
[Second parallel region] Thread 3: a = 67890.
[Second parallel region] Thread 1: a = 67890.
[Second parallel region] Thread 2: a = 67890.
[Second parallel region] Thread 0: a = 67890.
[user21@shavak OPENMP]$ 
*/
