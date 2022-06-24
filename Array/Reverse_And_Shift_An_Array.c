#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    // function to print the elements of array.
    int i;
    printf("Elements of array:\n");
    for(i = 0; i < arr.length; i++){
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}

void Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array *arr)
{
    // this function is used to reverse an array. in this method we are going to take an auxillary array.
    int *B;
    int i,j;
    B = (int*)malloc(arr->length*sizeof(int));
    for(i = arr->length-1, j = 0; i >= 0; i--, j++){
        B[j] = arr->A[i];
    }
    for(i = 0; i < arr->length; i++){
        arr->A[i] = B[i];
    }
    free(B);
}

void Reverse2(struct Array *arr){
    // second method to reverse an array in this we scan from the starting and end of an array.
    int i, j;
    for(i = 0, j = arr->length-1; i < j; i++, j--){
        Swap(&arr->A[i],&arr->A[j]);
    }
}



int main(){
    struct Array arr = {{2,3,4,5,6},20,5};
    Reverse2(&arr);
    Display(arr);
    return 0;
}