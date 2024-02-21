#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<sys/time.h>
#include<omp.h>
#define N 99999999

int main(int argc, char** argv)
{
  int i, j;
  double area, pi;
  double dx, y, x;
  double exe_time;

  struct timeval stop_time, start_time;

  dx = 1.0/N;
  x = 0.0;
  area = 0.0;

  gettimeofday(&start_time, NULL);

  // int thrd = atoi(argv[1]);
  //#pragma omp parallel for default(none) private(x,y) shared(dx) reduction(+:area) num_threads(2)
  #pragma omp parallel for default (none)  private(i) firstprivate(y,x,dx) reduction(+:area) num_threads(32)
  for(i=0;i<N;i++)
  {
      x = i*dx;
      y = sqrt(1-x*x);
      area += y*dx;
  }

  gettimeofday(&stop_time, NULL);	
  exe_time = (stop_time.tv_sec+(stop_time.tv_usec/1000000.0)) - (start_time.tv_sec+(start_time.tv_usec/1000000.0));

  pi = 4.0*area;
  printf("Value of pi is = %.16lf\nExecution time is = %lf seconds\n", pi, exe_time);
  return 0;
}

/*

THREADS=2
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ gcc -fopenmp PI_OPENMP.c -lm
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ ./a.out
Value of pi is = 3.1415926735878834
Execution time is = 0.241043 seconds

THREADS=4
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ gcc -fopenmp PI_OPENMP.c -lm
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ ./a.out
Value of pi is = 3.1415926735888511
Execution time is = 0.134285 seconds

THREADS=8
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ gcc -fopenmp PI_OPENMP.c -lm
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ ./a.out
Value of pi is = 3.1415926735886197
Execution time is = 0.086128 seconds

THREADS=16
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ gcc -fopenmp PI_OPENMP.c -lm
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ ./a.out
Value of pi is = 3.1415926735886579
Execution time is = 0.089208 seconds

THREADS=32
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ gcc -fopenmp PI_OPENMP.c -lm
hpcsap@hpcsap-DIT400TR-55L:~/MPI/OPENMP_MPI$ ./a.out
Value of pi is = 3.1415926735886321
Execution time is = 0.089396 seconds

*/
