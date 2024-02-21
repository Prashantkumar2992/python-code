#include <CL/sycl.hpp>
constexpr int N=16;
using namespace sycl;

int main()
{
  std::vector<int> data(N);
  {

      buffer A(data);
      queue q; 
      q.submit([&](handler& h) {
      accessor out(A, h, write_only);
      h.parallel_for(N, [=](auto i) {
      out[i] = i;
      });
      });

  }

  for (int i=0; i<N; ++i) 
  {
      std::cout << data[i] <<"  ";
  }

  printf("\n");

}



/*

OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ source /opt/intel/oneapi/setvars.sh
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL$ vim buffer.cpp
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ icpx -fsycl buffer.cpp
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ ./a.out
0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ 

*/
