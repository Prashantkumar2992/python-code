#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
int a= 123;
#pragma omp parallel default(none) firstprivate(a)
{
printf("thread %d: a =%d. \n", omp_get_thread_num(), a);

#pragma omp barrier

#pragma omp single copyprivate(a)
{
a=456;
printf("thread %d executes the single construct and changes a to %d.\n", omp_get_thread_num(),a);
}
printf("thread %d: a= %d.\n", omp_get_thread_num(),a);
}
return 0;
}
