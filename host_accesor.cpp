#include <CL/sycl.hpp>
using namespace sycl;
constexpr int N = 16;

int main() {
  std::vector<int> v(N,10);
  queue q;

  buffer buf(v);
  q.submit([&](handler& h) {
	accessor a(buf, h);
	h.parallel_for(N, [=](auto i) {
	  a[i] -= 2;
	});
  });

  host_accessor b(buf, read_only);
  for (int i = 0; i < N; i++)
	std::cout << b[i] << "\t";
	std::cout << "\n";
  return 0;
}



/*

OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ icpx -fsycl host_accesor.cpp
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ ./a.out
8	8	8	8	8	8	8	8	8	8	8	8	8	8	8	8	
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ 

*/
