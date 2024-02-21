#include<stdio.h>
#include<omp.h>
#define NUM 100000000

int isprime(int x)
{
  for(int y=2; y*y <= x; y++)
  {
    if(x%y == 0)
    return 0;
  }
  return 1;
}

int main()
{
  int sum = 0;
  #pragma omp parallel for reduction(+:sum)
  for(int i=2;i<=NUM;i++)
  {
    sum += isprime(i);
  }
  printf("Number of primes nos : %d\n",sum);
  return 0;
}


/*

OUTPUT
[user21@shavak OPENMP]$ vim reduction.c
[user21@shavak OPENMP]$ gcc -fopenmp reduction.c
[user21@shavak OPENMP]$ ./a.out
Number of primes nos : 5761455
[user21@shavak OPENMP]$ 
*/
