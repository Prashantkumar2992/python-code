#include<omp.h>
#include<stdio.h>
int main(void)
{
#pragma omp parallel
        if(omp_in_parallel()){
        printf("Inside a parallel region.\n");
        }
        else{
        printf("Not inside a parallel region.\n");
        }
        return 0;
}

/*
OUTPUT

[user21@shavak OPENMP]$ vim if.c
[user21@shavak OPENMP]$ gcc -fopenmp if.c
[user21@shavak OPENMP]$ ./a.out
Inside a parallel region.
Inside a parallel region.
Inside a parallel region.
Inside a parallel region.
*/
