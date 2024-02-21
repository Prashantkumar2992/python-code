#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main(){
	omp_set_num_threads(4);
	int val=1234;
	printf("Value of \"val\" before the OpenMp parallel region :%d\n",val);
	#pragma omp parallelfirst private(val)
	{
	printf("Thread %d sees \"val\" =%d\n", omp_get_thread_num(), val);
	val++;
	printf("Thread %d sees \"val\" =%d\n", omp_get_thread_num(), val);
	}
	printf("Value of \"val\" after the OpenMp parallel region:%d\n",val);
	return 0;
}


/*
OUTPUT

[user21@shavak OPENMP]$ gcc -fopenmp val.c
[user21@shavak OPENMP]$ ./a.out
Value of "val" before the OpenMp parallel region :1234
Thread 0 sees "val" =1234
Thread 0 sees "val" =1235
Value of "val" after the OpenMp parallel region:1235

*/
