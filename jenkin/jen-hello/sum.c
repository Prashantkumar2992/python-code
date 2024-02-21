#include<stdio.h>
#include<omp.h>
int  main()

{
int i;	
int tmp=10;
int a[i];


a[i]=0;



#pragma omp parallel for 
for( i=1;i<100;i++)
{
a[i] = a[i-1] + tmp;

}

for( i=1;i<100;i++)
{
printf("%d ",a[i] );
}
return 0;
}
