#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(int argc, char* argv[])
{
omp_set_num_threads(4);
int total = 0;
#pragma omp parallel default(none) shared(total)
{
for(int i =0; i<10; i++)
{
#pragma omp atomic
total++;
}
}
printf("total = %d\n", total);
return 0;
}

