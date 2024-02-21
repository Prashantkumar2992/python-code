#include <stdio.h>
#include <mpi.h>
#define N 9999
int main(int argc, char *argv[]) {
    int numProcs, rank, m, i, j, prime = 1;
    double startwtime, endwtime;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numProcs);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 0) {
        startwtime = MPI_Wtime();
    }

    for (j = 1; j <= numProcs; j++) {
        if (rank == j) {
            m = 1 + (N - 1) * (j - 1) / numProcs;
            i = 1 + (N - 1) * j / numProcs;
            if (m % 2 == 0) {
                m++;
            }
            if (i % 2 == 0) {
                i--;
            }
            for (i = m; i <= N; i += 2) {
                prime = 1;
                for (j = 3; j <= i / 3; j += 2) {
                    if (i % j == 0) {
                        prime = 0;
                        break;
                    }
                }
                if (prime == 1) {
                    printf("Prime number is: %d\n", i);
                }
            }
        }
    }

    if (rank == 0) {
        endwtime = MPI_Wtime();
        printf("Time: %f\n", endwtime - startwtime);
    }

    MPI_Finalize();
    return 0;
}
