#include <CL/sycl.hpp>
using namespace sycl;
constexpr int N=16;

int main() {
    sycl::queue q;
    int *data1 =  malloc_shared<int>(N, q);
    int *data2 =  malloc_shared<int>(N, q);
    for(int i=0;i<N;i++) 
    {
        data1[i] = 10; 
        data2[i] = 10;
    }
    auto e1 = q.parallel_for(N, [=](auto i){
        data1[i] += 2;
    });
    auto e2 = q.parallel_for(N, [=](auto i){
        data2[i] += 3;
    });
    q.submit([&] (sycl::handler &h){
        h.depends_on({e1,e2});
        h.parallel_for(N, [=](auto i){
            data1[i] += data2[i];
        });
    }).wait();
    for(int i=0;i<N;i++) 
    {
        std::cout << data1[i] << "\t";
    }
    
    std::cout<<"\n";
    free(data1, q); 
    free(data2, q);
}



/* 

OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ icpx -fsycl usm_depends_on_v2.cpp
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ ./a.out
25	25	25	25	25	25	25	25	25	25	25	25	25	25	25	25	
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ 

*/
