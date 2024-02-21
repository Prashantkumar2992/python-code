#include<stdio.h>
#include<unistd.h>
#include<omp.h>


int main(void)
{
int a=100;

#pragma omp parallel for
for (int i= 0; i<15; i++)
{


a++;
#pragma omp flush 

printf("a is %d\n", a);
#pragma omp flush
}

return 0;
}


