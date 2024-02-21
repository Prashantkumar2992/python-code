#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main(int argc, char* argv[])
{
int val =0;
#pragma omp parallel default(shared)
{
if(omp_get_thread_num() == 0)
{
printf("thread 0 sets the value of \"val\": to 123."%d" \n",val);

 val=123;
}



int val=123;

#pragma omp single shared(shared)

{

if(omp_get_thread_num() == 0)

{

printf("thread 0 sets the value of \"val\": to 123."%d" \n",val);
}



printf("%d",val);
#pragma omp barrier
if(omp_get_thread_num() == 1)
{
printf("thread 1 reads the value of \"val\": %d. \n", val);
}
}
printf("%d",val);
return 0;
}
