#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char* argv[])

{
  MPI_Init(&argc, &argv);

  int size;

  MPI_Comm_size(MPI_COMM_WORLD, &size);

  if(size != 8)

  {
      printf("This application is meant to be run with 8 processes.\n");
      MPI_Abort(MPI_COMM_WORLD, EXIT_FAILURE);
  }

  
  int root_rank = 0;


  
  int my_rank;

  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

  // Each MPI process sends its rank to reduction, root MPI process collects the result
  int reduction_result = 0;

  MPI_Reduce(&my_rank, &reduction_result, 1, MPI_INT, MPI_SUM, root_rank, MPI_COMM_WORLD);

  if(my_rank == root_rank)

  {
    printf("The sum of all ranks is %d.\n", reduction_result);
  }

  MPI_Finalize();

  return EXIT_SUCCESS;

}
