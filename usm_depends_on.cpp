#include <CL/sycl.hpp>
using namespace sycl; 
constexpr int N=16;

int main() 
{
    sycl::queue q;
    int *data =  malloc_shared<int>(N, q);
    for(int i=0;i<N;i++) 
    {
        data[i] = 10;
    }
    auto e1 = q.submit([&] (handler &h){
        h.parallel_for(N, [=](auto i){
            data[i] += 2;
        });
    });
    auto e2 = q.submit([&] (handler &h){
        h.depends_on(e1);
        h.parallel_for(N, [=](auto i){
            data[i] += 3;
        });
    });
    q.submit([&] (handler &h){
        h.depends_on(e2);
        h.parallel_for(N, [=](auto i){
            data[i] += 5;
        });
    }).wait();
    for(int i=0;i<N;i++) 
    {
        std::cout << data[i] << "\t";
    }
    std::cout<<"\n";
    free(data, q);
}



/* 

OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ icpx -fsycl usm_depends_on.cpp
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ ./a.out
20	20	20	20	20	20	20	20	20	20	20	20	20	20	20	20	
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ 

*/
