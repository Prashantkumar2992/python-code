#include"stdio.h"
#include"mpi.h"
#include<stdlib.h>

#define n 10

int main(int argc , int **argv)
{
int r=50, i, j;
int pid,np;
MPI_Init(&argc, &argv);
 
    
MPI_Comm_rank(MPI_COMM_WORLD, &pid);
MPI_Comm_size(MPI_COMM_WORLD, &np);
 
int* a[r];
for (i = 0; i < r; i++)
  a[i] = (int*)malloc(r * sizeof(int));
  
  for(i=0; i<r; i++)
    for(j=0;j<r; j++)
    a[i][j]=1;
    
    /*for(i=0; i<r; i++)
    {
    for(j=0;j<r; j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
    } */
  int* b[r];
for (i = 0; i < r; i++)
  b[i] = (int*)malloc(r * sizeof(int));
  
  for(i=0; i<r; i++)
    for(j=0;j<r; j++)
    b[i][j]=1;  
    
     int* ab[r];
for (i = 0; i < r; i++)
  ab[i] = (int*)malloc(r * sizeof(int));
  
    for(i=0; i<r; i++)
    for(j=0;j<r; j++)
    ab[i][j]=a[i][j]+b[i][j];
    
    for(i=0; i<r; i++)
    {
    for(j=0;j<r; j++)
    {
    printf("%d ",ab[i][j]);
    }
    printf("\n");
    }  
    
    
    free(a);
    free(b);
    free(ab);
    MPI_Finalize();
 
    return 0;
}
