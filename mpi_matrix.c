#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#define SIZE 1000

void fillMatrix(int *matrix, int size) {
   for (int i = 0; i < size; i++) {
       for (int j = 0; j < size; j++) {
           matrix[i * size + j] = i + j;
       }
   }
}

void sumMatrix(int *matrixA, int *matrixB, int *matrixSum, int size) {
   for (int i = 0; i < size; i++) {
       for (int j = 0; j < size; j++) {
           matrixSum[i * size + j] = matrixA[i * size + j] + matrixB[i * size + j];
       }
   }
}

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

       fillMatrix(matrixA, SIZE);
       fillMatrix(matrixB, SIZE);
   }

   MPI_Barrier(MPI_COMM_WORLD);

   int localSize = SIZE * SIZE / size;
   int *matrixA_local = (int *)malloc(localSize * sizeof(int));
   int *matrixB_local = (int *)malloc(localSize * sizeof(int));
   int *matrixSum_local = (int *)malloc(localSize * sizeof(int));

   MPI_Scatter(matrixA, localSize, MPI_INT, matrixA_local, localSize, MPI_INT, 0, MPI_COMM_WORLD);
   MPI_Scatter(matrixB, localSize, MPI_INT, matrixB_local, localSize, MPI_INT, 0, MPI_COMM_WORLD);

   sumMatrix(matrixA_local, matrixB_local, matrixSum_local, SIZE);

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
