#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[]) {
    int rank, size, sum = 0, recv;
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    sum = rank + 1;

    if (rank == 0) {
        printf("Process 0 sent %d to Process %d\n", sum, size - 1);
        MPI_Send(&sum, 1, MPI_INT, size - 1, 0, MPI_COMM_WORLD);
    } else {
        printf("Process %d received %d from Process %d\n", rank, sum, rank - 1);
        MPI_Recv(&recv, 1, MPI_INT, rank - 1, 0, MPI_COMM_WORLD, &status);
        sum += recv;

        if (rank == size - 1) {
            printf("Process %d sent %d to Process 0\n", rank, sum);
            MPI_Send(&sum, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
        } else {
            printf("Process %d sent %d to Process %d\n", rank, sum, (rank + 1) % size);
            MPI_Send(&sum, 1, MPI_INT, (rank + 1) % size, 0, MPI_COMM_WORLD);
        }
    }

    if (rank == 0) {
        MPI_Recv(&recv, 1, MPI_INT, size - 1, 0, MPI_COMM_WORLD, &status);
        sum += recv;
        printf("Process 0 received %d from Process %d\n", recv, size - 1);
    }

    printf("The final sum at Process %d is %d\n", rank, sum);

    MPI_Finalize();
    return 0;
}
