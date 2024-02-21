#include<stdio.h>
#include<stdio.h>
#include<omp.h>
int main(int argc, char* argv[])
{
omp_set_num_threads(2);
printf("with no chunksize passed:\n");
#pragma omp parallel for schedule(auto)
for(int i = 0; i<10; i++)
{
printf("thread %d processes iteration %d.\n", omp_get_thread_num(), i);
}
printf("with a chuksize of 2:\n");

#pragma omp parallel for schedule(auto)

for(int i = 0; i<10; i++)
{
printf("thread %d processes iteration %d.\n", omp_get_thread_num(), i);
}
return 0;
}

