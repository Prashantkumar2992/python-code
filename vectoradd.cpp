#include <CL/sycl.hpp>

constexpr int num=100;
using namespace sycl;

  int main() {
  auto R = range<1>{ num };
  //Create Buffers A and B
  buffer<int> A{ R }, B{ R }, C{ R };
  //Create a device queue
  queue Q(cpu_selector_v);

  //# Print the device name
  std::cout << "Device: " << Q.get_device().get_info<info::device::name>() << "\n";

  
  // Initialize the data    
  Q.submit([&](handler& h) {
    accessor outa(A,h,write_only);
    accessor outb(B,h,write_only);
    h.parallel_for(R, [=](auto idx) {
      outa[idx] = idx[0];
      outb[idx] = idx[0];
    }); });
   
      
  Q.submit([&](handler& h) {
    accessor outa(A,h,read_only);
    accessor outb(B,h,read_only);
    accessor outc(C,h,write_only);
    h.parallel_for(R, [=](auto idx) {
      outc[idx] = outa[idx] + outb[idx]; }); });

 // And the following is back to device code
 host_accessor result(C,read_only);
  for (int i=0; i<num; ++i)
    std::cout << result[i] << "\t";    
    std::cout <<"\n";
  return 0;
}


/*

OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL$ vim vectoradd.c++
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ icpx -fsycl vectoradd.cpp
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ ./a.out
Device: Intel(R) Xeon(R) Silver 4208 CPU @ 2.10GHz
0	2	4	6	8	10	12	14	16	18	20	22	24	26	28	30	32	34	36	38	40	42	44	46	48	50	52	54	56	58	60	62	64	66	68	70	72	74	76	78	80	82	84	86	88	90	92	94	96	98	100	102104	106	108	110	112	114	116	118	120	122	124	126	128	130	132	134	136	138	140	142	144	146	148	150	152	154156	158	160	162	164	166	168	170	172	174	176	178	180	182	184	186	188	190	192	194	196	198	
hpcsap@hpcsap-DIT400TR-55L:~/RAJMALA_HPCSAP/SYCL_RAJ$ 

*/
