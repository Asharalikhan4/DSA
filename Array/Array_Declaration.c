#include <stdio.h>

int main(){
    // Types of array declaration.
    
    int A[5]; // Only declaration values are filles with some garbage value.

    int B[5] = {1,2,3,4,5}; // Declaration with initialization.

    int c[10] = {1,2,3};  //Other values in this will be initialized with zero.

    int D[5] = {0}; //All the values will be initialized with zero.

    int E[] = {1,2,3,4,5,6}; //Here the size of the array will be automatically decided acc to our entries.

    return 0;
}