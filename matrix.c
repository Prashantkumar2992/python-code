 #include<stdio.h>
  2 #include<math.h>
  3 #include<omp.h>
  4 #include<stdlib.h>
  5 #define N 22
  6 
  7 int main()
  8 {
  9 long long k,i,j,n=500,a[500][500],b[500][500],c[500][500];
 10 
 11 printf("Enter the element of matrix\n");
 12 for(i=0;i<n;i++)
 13 {
 14 for(j=0;j<n;j++)
 15 {
 16 a[i][j]=rand() % 500 + 1;
 17 }
 18 }
 19 
 20 
 21 printf("Enter the element of matrix2\n");
 22 for(i=0;i<n;i++)
 23 {
 24 for(j=0;j<n;j++)
 25 {
 26 b[i][j]=rand() % 500 + 1;
 27 }
 28 }
 29 
 30 
 31 printf("Enter the element of  matrix1\n");
 32 for(i=0;i<n;i++)
 33 {
 34 
 35 for(j=0;j<n;j++)
 36 {
 37 printf("%lli ",a[i][j]);
 38 }
 39 printf("\n");
 40 }
 41 
 42 printf("Enter the element of matrix2\n");
 43 for(i=0;i<n;i++)
 44 {
 45 
 46 for(j=0;j<n;j++)
 47 {
 48 printf("%lli ",b[i][j]);
 49 }
 50 printf("\n");
 51 }
 52 
 53 
 54 omp_set_num_threads(N);
 55 #pragma omp parallel for
 56 for(i=0;i<n;i++)
 57 {
 58 for(j=0;j<n;j++)
 59 {
 60 
 61 c[i][j]=0;
 62 for(k=0;k<n;k++)
 63 {
 64         c[i][j]=c[i][j]+a[i][k]*b[k][j];
 65 }
 66 }
 67 }
 68 
 69 printf("Enter the element of result matrix\n");
 70 for(i=0;i<n;i++)
 71 {
 72 for(j=0;j<n;j++)
 73 {
 74 printf("%lli ",c[i][j]);
 75 }
 76 printf("\n");
 77 }
 78 return 0;
 79 }
~                                                                                                                                                                                                                                                                                                                                                                           
~                                               
