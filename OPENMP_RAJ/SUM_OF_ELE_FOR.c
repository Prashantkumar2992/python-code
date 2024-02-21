#include<stdio.h>
int main()
{
  int i;
  double sum=0.0;

  for(i=0;i<=20000;i++)
  {
    sum = sum+i;
  }
    printf("Sum = %lf\n",sum);
}


/*
OUTPUT
[user21@shavak OPENMP]$ vim sum.c
[user21@shavak OPENMP]$ gcc -fopenmp sum.c
[user21@shavak OPENMP]$ ./a.out
Sum = 200010000.000000
*/
