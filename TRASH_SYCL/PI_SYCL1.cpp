#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<sys/time.h>
#include <CL/sycl.hpp>
constexpr int N=16;
using namespace sycl;
#define N 99999999

int main()
{
  int i, j;
  int area, pi;
  int dx, y, x;
  int exe_time;
  struct timeval stop_time, start_time;
  std::vector<int> data(N);
  nd_item<1> it;
  queue q;

  dx = 1/N;
  x = 0;
  area = 0;
  buffer buf_data(data);
  gettimeofday(&start_time, NULL);

   q.submit([&](handler& h) {
   accessor acc_data( buf_data, h, read_only);
  
   auto i = it.get_global_id();
   
    });
    
  for(i=0; i<N; i++)
  {
    x = i*dx;
    y = sqrt(1-x*x);
    area += y*dx;
  }

  gettimeofday(&stop_time, NULL);	
  exe_time = (stop_time.tv_sec+(stop_time.tv_usec/1000000.0)) - (start_time.tv_sec+(start_time.tv_usec/1000000.0));

  pi = 4.0*area;
  printf("Value of pi is = %.16d\nExecution time is = %d seconds\n", pi, exe_time);

}

