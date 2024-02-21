#include<stdio.h>
#include<omp.h>
#define N 5
int main()
{
int a=10;
int b=20;
int c=20;

omp_set_num_threads(N);

#pragma omp parallel for firstprivate(c)
for(int i=0;i<N;i++)
{
printf("The thread %d value is %d\n",omp_get_thread_num(),c);
c=a+b;
printf("The thread %d value is %d\n",omp_get_thread_num(),c);
}
return 0;
}


/* 

OUTPUT
[user21@shavak OPENMP]$ vim FOR_LOOP_FIRSTPRIVATE.c
[user21@shavak OPENMP]$ gcc -fopenmp FOR_LOOP_FIRSTPRIVATE.c
[user21@shavak OPENMP]$ ./a.out
The thread 2 value is 20
The thread 2 value is 30
The thread 4 value is 20
The thread 4 value is 30
The thread 1 value is 20
The thread 1 value is 30
The thread 3 value is 20
The thread 3 value is 30
The thread 0 value is 20
The thread 0 value is 30
[user21@shavak OPENMP]$ 

*/