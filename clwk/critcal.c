#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
#define N 20

int main()
{
long long sum=0,ab=0,i;
long long a[500];
omp_set_num_threads(N);
for( i = 0; i < 500; i++){
        a[i] = rand();
}


#pragma omp parallel for

for(i=0; i<8; i++)
{

sum= sum +a[i];
}

#pragma omp critical
(
 = 0; i < 500; i++){
        a[i] = rand();
}
	sum+=sum;
}





printf("%lli\n",sum);
return 0;
}

