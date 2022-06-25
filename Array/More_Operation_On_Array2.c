#include <stdio.h>

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    // Function to print the arrys element.
    int i;
    printf("Elements of the array:\n");
    for(i = 0; i < arr.length; i++){
        printf("%d\n",arr.A[i]);
    }
}

void InsertionInSortedArray(struct Array *arr, int value){
    // this function will insert the value in the sorted array in a sorted manner.
    if(arr->length == arr->size){
        return;
    }
    int i = arr->length-1;
    while(i >= 0 && arr->A[i] > value){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = value;
    arr->length++;
}

int IsSortedOrNot(struct Array arr){
    // this function is used to check whether the array is sorted or not.
    int i;
    for(i = 0; i < arr.length-1; i++){
        if(arr.A[i] > arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ReArrange(struct Array *arr){
    // this function will place all the negative in the left side and the positive value in the right side.
    int i = 0, j = arr->length-1;
    while(i < j){
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j){
            Swap(&arr->A[i],&arr->A[j]);
        }
    }
}


int main(){
    struct Array arr = {{2,-3,25,10,-15,-7},20,6};
    // Display(arr);
    // InsertionInSortedArray(&arr,8);
    // Display(arr);
    // if(IsSortedOrNot(arr) == 1){
    //     printf("Array is sorted!");
    // } else {
    //     printf("Array is not sorted!");
    // }
    ReArrange(&arr);
    Display(arr);
    return 0;
}