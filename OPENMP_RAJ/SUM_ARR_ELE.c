#include<stdio.h>
#include<omp.h>
int main()
{
        int i,n,sum=0,arr[5];
        printf("Enter array elements:\n");
//      for(i=0;i<n;i++)
//              scanf("%d",&arr[i]);

        #pragma omp parallel private(i)
        for (i=0;i<5;i++){
                scanf("%d",&arr[i]);
                sum = sum + arr[i];
        }
        printf("The sum of array elements is:%d\n",sum);
        return 0;
}


/*
OUTPUT
[user21@shavak OPENMP]$ vim SUM_ARR_ELE.c 
[user21@shavak OPENMP]$ gcc -fopenmp SUM_ARR_ELE.c 
[user21@shavak OPENMP]$ ./a.out
Enter array elements:
1
2
3
4
5
6
7
8
9
9
8
7
6
5
4
3
2
1
1
2
The sum of array elements is:93
*/
