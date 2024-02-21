#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(){
        omp_set_num_threads(4);

        int total = 0;
        // Create the parallel region
        #pragma omp parallel default(none) shared (total)
        {
                // Calculate my factorial
                 int my_value = 1;
                for(int i=2; i<= omp_get_thread_num();i++)
                {
                        my_value *=i;
                }

                // Add my value to the total
                #pragma omp critical 
                {
                        printf("[Thread %d]Total before i add my value (%d):%d.\n",omp_get_thread_num(),my_value,total);
                        total += my_value;
                        printf("[Thread %d] Total after i added my value:%d.\n",omp_get_thread_num(),total);
                }
        }
return 0;
}


/* 

OUTPUT
[user21@shavak OPENMP]$ vim critical.c
[user21@shavak OPENMP]$ gcc -fopenmp critical.c
[user21@shavak OPENMP]$ ./a.out
[Thread 0]Total before i add my value (1):0.
[Thread 0] Total after i added my value:1.
[Thread 1]Total before i add my value (1):1.
[Thread 1] Total after i added my value:2.
[Thread 2]Total before i add my value (2):2.
[Thread 2] Total after i added my value:4.
[Thread 3]Total before i add my value (6):4.
[Thread 3] Total after i added my value:10.
*/
