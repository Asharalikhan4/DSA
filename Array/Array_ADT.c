// ADT = representation of data with operation on that data.

#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    // Function to print the array.
    printf("Elements are:\n");
    for(int j = 0; j < arr.length; j++){
        printf("%d\n",arr.A[j]);
    }
}

int main(){
    struct Array arr;
    int n, i;
    printf("Enter the size of the array:\n");
    scanf("%d",&arr.size);
    arr.A = (int*)malloc(arr.size*sizeof(int));
    arr.length = 0;
    printf("Enter how many number you want to enter:\n");
    scanf("%d",&n);
    printf("Enter all the elements:\n"); // Taking array as a input.
    for(i = 0; i < n; i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
    Display(arr);  // To display the array.
    free(arr.A);  // To free the dynamically allocated memory.
    return 0;
}