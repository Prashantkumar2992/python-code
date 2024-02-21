#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
        // Use 4 threads when creating OpenMP parallel region 
        omp_set_num_threads(4);
        int total = 0;
        #pragma omp parallel default(none) shared(total)
        {

                // Create a parallel region
                for(int i=0; i<10;i++)
                {
                        // Atomically add one to the total  
                        #pragma omp atomic   // critical  // reduction
                        total++;
                }

        }

        printf("Total = %d.\n",total);
        return 0;
}

/*
OUTPUT

[user21@shavak OPENMP]$ vim atomic.c 
[user21@shavak OPENMP]$ gcc -fopenmp atomic.c 
[user21@shavak OPENMP]$ ./a.out
Total = 40.

*/
