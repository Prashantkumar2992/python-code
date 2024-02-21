
#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int rank, size, i;
    MPI_Datatype type, type2;
    int displacement[3] = { 0, 3, 8 };
    int buffer[30];
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (size < 2)
    {
        printf("Please run with 2 processes.\n");
        MPI_Finalize();
        return 1;
    }
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    MPI_Type_contiguous(3, MPI_INT, &type2);
    MPI_Type_commit(&type2);
    MPI_Type_create_indexed_block(3, 2, displacement, type2, &type);
    MPI_Type_commit(&type);

    if (rank == 0)
    {
        for (i=0; i<30; i++)
            buffer[i] = i;
        MPI_Send(buffer, 1, type, 1, 123, MPI_COMM_WORLD);
    }

    if (rank == 1)
    {
        for (i=0; i<30; i++)
            buffer[i] = -1;
        MPI_Recv(buffer, 1, type, 0, 123, MPI_COMM_WORLD, &status);
        for (i=0; i<30; i++)
            printf("buffer[%d] = %d\n", i, buffer[i]);
        fflush(stdout);
    }

  }
MPI_Type_free(&type);
MPI_Type_free(&type2);
    MPI_Finalize();
    return 0;
}
