#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#define SIZE 1000

int main(int argc, char *argv[]) {
   int rank, size;
   int *matrixA, *matrixB, *matrixSum;

   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD, &rank);
   MPI_Comm_size(MPI_COMM_WORLD, &size);

   if (rank == 0) {
       matrixA = (int *)malloc(SIZE * SIZE * sizeof(int));
       matrixB = (int *)malloc(SIZE * SIZE * sizeof(int));
       matrixSum = (int *)malloc(SIZE * SIZE * sizeof(int));

       for (int i = 0; i < SIZE; i++) {
           for (int j = 0; j < SIZE; j++) {
               matrixA[i * SIZE + j] = i + j;
               matrixB[i * SIZE + j] = i - j;
           }
       }
   }

   MPI_Barrier(MPI_COMM_WORLD);

   int localSize = SIZE * SIZE / size;
   int *matrixA_local = (int *)malloc(localSize * sizeof(int));
   int *matrixB_local = (int *)malloc(localSize * sizeof(int));
   int *matrixSum_local = (int *)malloc(localSize * sizeof(int));

   MPI_Scatter(matrixA, localSize, MPI_INT, matrixA_local, localSize, MPI_INT, 0, MPI_COMM_WORLD);
   MPI_Scatter(matrixB, localSize, MPI_INT, matrixB_local, localSize, MPI_INT, 0, MPI_COMM_WORLD);

   for (int i = 0; i < localSize; i++) {
       matrixSum_local[i] = matrixA_local[i] + matrixB_local[i];
   }

   MPI_Gather(matrixSum_local, localSize, MPI_INT, matrixSum, localSize, MPI_INT, 0, MPI_COMM_WORLD);

   if (rank == 0) {
       for (int i = 0; i < SIZE; i++) {
           for (int j = 0; j < SIZE; j++) {
               printf("%d ", matrixSum[i * SIZE + j]);
           }
           printf("\n");
       }

       free(matrixA);
       free(matrixB);
       free(matrixSum);
   }

   free(matrixA_local);
   free(matrixB_local);
   free(matrixSum_local);

   MPI_Finalize();
   return 0;
}
