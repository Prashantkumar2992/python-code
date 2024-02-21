#include<stdio.h>
#include<omp.h>
#define NUM 100 

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
  int i;
  int sum = 0;
  
  #pragma omp parallel
  {
    #pragma omp sections reduction(+:sum)
    {
       #pragma omp section
       {
       for(int i=2;i<=NUM;i++)
       {
        sum += isprime(i);
       }
       printf("Number of primes nos : %d\n",sum);
      }
      
       #pragma omp section
       {
        for(int i=2;i<=NUM;i++)
        {
         sum += isprime(i);
        }
        printf("Number of primes nos : %d\n",sum);
       }
     }
   }
  return 0;
}  

/*
OUTPUT

[user21@shavak OPENMP]$ vim SECTIONS_REDUCTION.c
[user21@shavak OPENMP]$ gcc -fopenmp SECTIONS_REDUCTION.c
[user21@shavak OPENMP]$ ./a.out
Number of primes nos : 25
Number of primes nos : 25
[user21@shavak OPENMP]$ 
*/
