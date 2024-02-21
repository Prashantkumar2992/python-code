/* File:  
 *    pth_hello.c
 *
 * Purpose:
 *    Illustrate basic use of pthreads:  create some threads,
 *    each of which prints a message.
 *
 * Input:
 *    none
 * Output:
 *    message from each thread
 *
 * Compile:  gcc -g -Wall -o pth_hello pth_hello.c -lpthread
 * Usage:    ./pth_hello <thread_count>
 *
 * IPP:   Section 4.2 (p. 153 and ff.)
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> 

const int MAX_THREADS = 64;
const int chunksize = 3;


int thread_count=3;  

void Usage(char* prog_name);
void *Hello(void* rank);  

/*--------------------------------------------------------------------*/
int main(int argc, char* argv[]) {
   long       thread;  
   pthread_t* thread_handles; 

   
   if (argc != 2) Usage(argv[0]);
   thread_count = strtol(argv[1], NULL, 10);  
   if (thread_count <= 0 || thread_count > MAX_THREADS) Usage(argv[0]);

   thread_handles = malloc (thread_count*sizeof(pthread_t)); 

   for (thread = 0; thread < thread_count; thread++)  
      pthread_create(&thread_handles[thread], NULL,
          Hello, (void*) thread);  

   printf("Hello from the main thread\n");

   for (thread = 0; thread < thread_count; thread++) 
      pthread_join(thread_handles[thread], NULL); 

   free(thread_handles);
   return 0;
}  

/*-------------------------------------------------------------------*/
void *Hello(void* rank) {
   long my_rank = (long) rank; 
   int i,j;
   int start;
   start = my_rank * chunksize;
   
   
   for(i=start; i<NUM_ITER; i+=(chunksize*thread_count))
    {
    for(j=i;j<(i+chunksize);i++)
{
   printf("Hello from thread %ld of %d\n", my_rank, j);
}
}
   return NULL;
}  

/*-------------------------------------------------------------------*/
void Usage(char* prog_name) {
   fprintf(stderr, "usage: %s <number of threads>\n", prog_name);
   fprintf(stderr, "0 < number of threads <= %d\n", MAX_THREADS);
   exit(0);
}  
