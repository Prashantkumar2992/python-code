#include<stdio.h>
#include<omp.h>
#define N  50
int main()
{
int i, sum=0;
float d[N],a[N], b[N], c[N];
printf("%d\n",i);

for (i=0; i < N; i++)
{
a[i] = i * 1.5;
b[i] = i + 22.35;
}

#pragma omp parallel shared(a,b,c,d)
{

#pragma omp sections firstprivate(i)
{
#pragma omp section
for (i=0; i<N;i++)
{
c[i] = a[i] + b[i];
sum=sum+c[i];
printf("section 1 # working thread : %d | %f + %f = %f\n",omp_get_thread_num(),a[i],b[i],c[i]);
}
#pragma omp section
for (i=0; i<N;i++)
{
a[i] = a[i] + b[i];
sum=sum+a[i];
printf("section 1 # working thread : %d | %f + %f = %f\n",omp_get_thread_num(),a[i],b[i],c[i]);
}
#pragma omp section
for (i=0; i<N;i++)
{
b[i] = a[i] + b[i];
sum=sum+a[i];
printf("section 1 # working thread : %d | %f + %f = %f\n",omp_get_thread_num(),a[i],b[i],c[i]);
}
#pragma omp section
for (i=0; i<N;i++)
{
d[i] = a[i] * b[i];
sum=sum+d[i];
printf("section 1 # working thread : %d | %f * %f = %f\n",omp_get_thread_num(),a[i],b[i],d[i]);
}
}
}
return 0;
}
