#include<stdio.h>
#include<stdlib.h>
#include<mpi.h>

int main(int argc,char **argv)
{
  int rank,myid,size,val;
  int sum;
  MPI_Status status;
  MPI_Request request;

  MPI_Init(&argc,&argv);
  MPI_Comm_size(MPI_COMM_WORLD,&size);
  MPI_Comm_rank(MPI_COMM_WORLD,&myid);    // Get my rank
 
  if(size != 8)

  {
      printf("This application is meant to be run with 8 processes.\n");
      MPI_Abort(MPI_COMM_WORLD, EXIT_FAILURE);
  }

  int root_rank = 0;
  sum = 0;
  
  if(myid == (size - 1))
  {
      val=val+myid;
  }
	
  if(myid==0)
  {
    for( int i=1;i<size;i++)
      {
	MPI_Recv(&val, 1, MPI_INT, i, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
	myid=myid-1;
	val=val+myid;
	printf("\nSum=%d\n",sum);
      }	
      
  }
  else
  {
    MPI_Send(&val, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
    myid=myid+1;
  }
  
MPI_Finalize();
return EXIT_SUCCESS; 

}

