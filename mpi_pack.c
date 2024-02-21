#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int rank, size;
    int i;
    char c[100];
    char buffer[110];
    int position = 0;
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (size < 2)
    {
        printf("Please run with 2 processes.\n");fflush(stdout);
        MPI_Finalize();
        return 1;
    }
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 0)
    {
        for (i=0; i<110; i++)
            c[i] = i;
        i = 123;
        MPI_Pack(&i, 1, MPI_INT, buffer, 120, &position, MPI_COMM_WORLD);
        MPI_Pack(c, 110, MPI_CHAR, buffer, 120, &position, MPI_COMM_WORLD);
        MPI_Send(buffer, position, MPI_PACKED, 1, 110, MPI_COMM_WORLD);
    }

    if (rank == 1)
    {
        MPI_Recv(buffer, 120, MPI_PACKED, 0, 110, MPI_COMM_WORLD, &status);
        MPI_Unpack(buffer, 120, &position, &i, 1, MPI_INT, MPI_COMM_WORLD);
        MPI_Unpack(buffer, 120, &position, c, 110, MPI_CHAR, MPI_COMM_WORLD);
        printf("i=%d\nc[0] = %d\n...\nc[109] = %d\n", i, (int)c[0], (int)c[109]);fflush(stdout);
    }

    MPI_Finalize();
    return 0;
}

