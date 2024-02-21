#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int np, pid;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &pid);
    MPI_Comm_size(MPI_COMM_WORLD, &np);

    int partial_sum = 0;
    if (pid == 0) {
        int a[] = { 1, 2, 3, 4, 5};
        for(int i = 0; i < 5; i++)
           partial_sum += a[i];        
    }
    else  if (pid == 1){
        int a[] = {6, 7, 8, 9, 10};
        for(int i = 0; i < 5; i++) 
           partial_sum += a[i];
    }
    int sum;
    MPI_Reduce(&partial_sum, &sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    if (pid == 0){
       printf("Sum of array is elements is : %d\n", sum);
    }
 
    MPI_Finalize();
    return 0;
}

/*

OUTPUT
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ mpicc mpi_red.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ mpiexec -np 2 ./a.out
Sum of array elements is : 55
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ mpiexec -np 1 ./a.out
Sum of array elements is : 15
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ mpiexec -np 4 ./a.out
Sum of array elements is : 55
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 

*/
