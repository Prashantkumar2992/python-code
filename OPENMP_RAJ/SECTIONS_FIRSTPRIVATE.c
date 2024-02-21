#include<stdio.h>
#include<omp.h>
#define N 5
int main()
{
  int i;
  float a[N],b[N],c[N],d[N],e[N];

  for(int i=0;i<N;i++)
  {
    a[i]=i*1.5;
    b[i]=i+22.35;
  }

  #pragma omp parallel shared(a,b,c,d,e) firstprivate(i)
  {
    #pragma omp sections nowait
    {
      #pragma omp section
      for(int i=0;i<N;i++)
      {
        c[i] = a[i] + b[i];
        printf("Section 1 # working thread : %d | %f + %f = %f\n", omp_get_thread_num(),a[i],b[i],c[i]);
      }
      
      #pragma omp section
      for(int i=0;i<N;i++)
      {
        d[i] = a[i] * b[i];
        printf("Section 2 # working thread : %d | %f * %f = %f\n", omp_get_thread_num(),a[i],b[i],d[i]);
      }
    }
  }
  return 0;
}


/*
OUTPUT

[user21@shavak OPENMP]$ vim SECTIONS_FIRSTPRIVATE.c
[user21@shavak OPENMP]$ gcc -fopenmp SECTIONS_FIRSTPRIVATE.c
[user21@shavak OPENMP]$ ./a.out
Section 1 # working thread : 0 | 0.000000 + 22.350000 = 22.350000
Section 1 # working thread : 0 | 1.500000 + 23.350000 = 24.850000
Section 1 # working thread : 0 | 3.000000 + 24.350000 = 27.350000
Section 1 # working thread : 0 | 4.500000 + 25.350000 = 29.850000
Section 1 # working thread : 0 | 6.000000 + 26.350000 = 32.349998
Section 2 # working thread : 2 | 0.000000 * 22.350000 = 0.000000
Section 2 # working thread : 2 | 1.500000 * 23.350000 = 35.025002
Section 2 # working thread : 2 | 3.000000 * 24.350000 = 73.050003
Section 2 # working thread : 2 | 4.500000 * 25.350000 = 114.075005
Section 2 # working thread : 2 | 6.000000 * 26.350000 = 158.100006
[user21@shavak OPENMP]$ 
*/
