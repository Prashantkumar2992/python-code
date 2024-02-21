#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char* argv[])

{
  MPI_Init(&argc, &argv);

  // Get the number of processes and check only 4 are used.
  int size;

  MPI_Comm_size(MPI_COMM_WORLD, &size);

  if(size != 4)

  {
      printf("This application is meant to be run with 4 processes.\n");
      MPI_Abort(MPI_COMM_WORLD, EXIT_FAILURE);
  }

  // Determine root's rank
  int root_rank = 0;


  // Get my rank
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

/*
OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ mpicc MPI_SUM.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ mpiexec -np 4 ./a.out
The sum of all ranks is 6.

*/


/**

 * @brief Illustrates how to use a sum reduction operation.

 * @details This application consists of a sum reduction; every MPI process

 * sends its rank for reduction before the sum of these ranks is stored in the

 * root MPI process. It can be visualised as follows, with MPI process 0 as

 * root:

 *

 * +-----------+ +-----------+ +-----------+ +-----------+

 * | Process 0 | | Process 1 | | Process 2 | | Process 3 |

 * +-+-------+-+ +-+-------+-+ +-+-------+-+ +-+-------+-+

 *   | Value |     | Value |     | Value |     | Value |

 *   |   0   |     |   1   |     |   2   |     |   3   |

 *   +-------+     +-------+     +-------+     +-------+

 *            \         |           |         /

 *             \        |           |        /

 *              \       |           |       /

 *               \      |           |      /

 *                +-----+-----+-----+-----+

 *                            |

 *                        +---+---+

 *                        |  SUM  |

 *                        +---+---+

 *                            |

 *                        +---+---+

 *                        |   6   |

 *                      +-+-------+-+

 *                      | Process 0 |

 *                      +-----------+

 **/
