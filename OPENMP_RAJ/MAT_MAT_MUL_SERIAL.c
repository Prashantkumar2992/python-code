#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<omp.h>

void accept(int arr[][3])   //subscript notation
{
  int i,j;
  for(i=0;i<3;i++) // for accepting 1st array elements 
  { 
    for(j=0;j<3;j++)
    {   
        scanf("%d",*(arr+i)+j);       // &arr[i][j]
    }
  }
}

void display(int (*arr)[3])   //pointer notation              // USING FUNCTIONS ACCEPT AND DISPLAY 
{
  int i,j;
  for(i=0;i<3;i++) // for displaying 1st array elements 
  { 
    for(j=0;j<3;j++)
    {   
        printf("%d ",*(*(arr+i)+j));
    }
    printf("\n");         // USED FOR PRINTING IN MATRIX FORM 
  }
}


int multiply(int arr[3][3], int b[3][3])
{
  int i,j,k,res[3][3]={0};
 
  #pragma omp parallel 
  omp_set_num_threads(5);
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         res[i][j] = 0;
              for(k=0;k<3;k++)
                      {
                        res[i][j] = res[i][j] + arr[i][k] * b[k][j];
                        //res[i][j] += arr[i][k] * b[k][j]; 
                       }
        }
    }
    printf("Multiplied matrix is:\n");
    for(int i=0;i<3;i++)
    {
     for(int j=0;j<3;j++)
       {
         printf("%d\t", res[i][j]);
        }
        printf("\n");
     }

   return 0;
}


int main()
{
  int arr[3][3],i,j,k,b[3][3];

  printf("Enter elements of first matrix :  ");
  accept(arr);
  display(arr);
  printf("\n");

  printf("Enter elements of second matrix :  ");
  accept(b);
  display(b);
  printf("\n");

  multiply(arr,b);
  return 0;
}

/*
[user21@shavak OPENMP]$ vim matrixmul.c
[user21@shavak OPENMP]$ gcc -fopenmp matrixmul.c
[user21@shavak OPENMP]$ ./a.out
Enter elements of first matrix :  1
2
3
4
5
6
7
8
9
1 2 3 
4 5 6 
7 8 9 

Enter elements of second matrix :  1
2
3
4
5
6
7
8
9
1 2 3 
4 5 6 
7 8 9 

Multiplied matrix is:
30	36	42	
66	81	96	
102	126	150	



*/
