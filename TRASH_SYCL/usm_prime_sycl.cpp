#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include <CL/sycl.hpp>
using namespace std;
using namespace sycl;
constexpr int N=10000;
constexpr int B=100;

/*
                N  PRIME_NUMBER

                1           0
               10           4
              100          25
            1,000         168
           10,000       1,229
          100,000       9,592
        1,000,000      78,498
       10,000,000     664,579
      100,000,000   5,761,455
    1,000,000,000  50,847,534

*/
int main()
{
  int i,j;
     queue q(cpu_selector_v);
	int count = 1, flag;
	{
	buffer buf_cnt(&count,range(1));
	  q.submit([&](handler& h) {
	  
   
    auto reduction_acc_data = reduction(buf_cnt, h, sycl::plus<>());
 }); 
	if(i>2)
	 	flag = 0;
		for(j=2;j<i;j++)	
	    {
		    if((i%j) == 0)
		    {
			    flag = 1;
			    break;
		    }
	    }
	      
        if(flag == 0)
        {
        	count++;
        }
	
	
	std::cout<<i<<" ";
	std::cout<<"\n";
}

}
