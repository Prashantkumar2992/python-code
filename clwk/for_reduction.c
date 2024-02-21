#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
#define N 2

int main()
{
int sum=0,i,a[20],n;
printf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
omp_set_num_threads(N);

#pragma omp parallel for reduction (+:sum)
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}

