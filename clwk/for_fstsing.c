#include<stdio.h>
#include<omp.h>
#define N 5
int main()
{

int a=10;
int b=20;
int c=321;
int i;
omp_set_num_threads(N);
#pragma omp single for firstprivate(i)

 for(int i=0;i<N;i++)
{

printf("the threads %d value is %d\n",omp_get_thread_num(),c);
c=a+b;

printf("the threads %d value is %d\n",omp_get_thread_num(),c);
}
printf("end of region\n");

printf("the threads value is %d\n",c);
return 0;
}

