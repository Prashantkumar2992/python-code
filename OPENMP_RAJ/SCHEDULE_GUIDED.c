#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(int argc,char* argv[])
{
  omp_set_num_threads(4);
  printf("With no chunksize passed:\n");

  #pragma omp parallel for schedule(guided)
  for(int i=0;i<10;i++)
  {
    printf("Thread %d processes iteration %d\n",omp_get_thread_num(),i);
  }
  
  return 0;
}


/*

OUTPUT
[user21@shavak OPENMP]$ vim guided.c 
[user21@shavak OPENMP]$ gcc -fopenmp guided.c 
[user21@shavak OPENMP]$ ./a.out
Thread 2 processes iteration 7. 
Thread 2 processes iteration 8. 
Thread 2 processes iteration 9. 
Thread 3 processes iteration 0. 
Thread 3 processes iteration 1. 
Thread 3 processes iteration 2. 
Thread 1 processes iteration 5. 
Thread 1 processes iteration 6. 
Thread 0 processes iteration 3. 
Thread 0 processes iteration 4. 

*/
