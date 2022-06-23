#include <stdio.h> // Header file for the input and output
#include <stdlib.h> // Header file for the malloc( malloc is used for dynamic memory allocation)

int main(){
    int i;
    // Static Array
    int A[3];
    A[0] = 1; 
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;

    // Creating a dynamic array for this we need a pointer.
    int *p;
    p = (int*)malloc(3*sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;

    // Printing the values of both the arrays.
    printf("values of first array:\n");
    for(i = 0; i <= 3; i++){
        printf("%d\n",A[i]);
    }
    printf("\n\n");

    printf("Values of second array:\n");

    for(i = 0; i <= 3; i++){
        printf("%d\n",p[i]);
    }

    free(p);  // we use free to free the dynamic allocated memory so it won't cause memory leak.

    return 0;
}