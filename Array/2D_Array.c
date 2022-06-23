// 2-D arrays is mainly used to represent the matrix or to use the tabular data.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    // Types by which we can declare 2-D array
    // This 2-d array will be inside the stack memory.
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};  // Declaration and initialization.

    // Second method is we can take an array of pointer
    int *B[3]; // This will take memory in stack
    // Code below down will take the memory in the heap.
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));

    // Third method by using the double pointer.
    // This whole array will take memory in the heap only the pointer will be in the stack memory.
    int **C;
    C = (int**)malloc(3*sizeof(int));
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));



    // Priting a 2-D array. we use the nested loops.
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



return 0;
}