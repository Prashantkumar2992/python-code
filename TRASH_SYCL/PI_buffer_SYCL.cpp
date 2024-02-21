#include<math.h>
#include<sys/time.h>
#include <CL/sycl.hpp>
#include<stdio.h>
constexpr int N=16;
using namespace std;
using namespace sycl;
#define N 99999999

int main()
{
  int i, j;
  queue q;
  float area, pi,sum =0.0,step;
  float dx, y, x;
 
  step=1.0/(float)N;
  {
     buffer buf_sum(&sum,range(1));
     q.submit([&](handler& h) {
     auto reduction_sum = reduction(buf_sum,h,plus<>());
     
     h.parallel_for(nd_range<1>{N, B}, reduction_sum, 
     [=](nd_item<1> it, auto& temp_sum) {
     int i = it.get_global_id(0);
     float i = (i)*step;
     temp_sum.combine(4.0/(1.0+x*x));
     });
    });
   }
  
  pi = step*sum;
  std::cout<< "PI value is : " << pi << endl;
}

