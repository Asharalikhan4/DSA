#include <stdio.h>

struct Array{
    int A[20];
    int size;
    int length;
};

int main(){
    struct Array arr1 = {{2,6,10,15,25},10,5};
    struct Array arr2 = {{3,4,7,18,20},10,5};
    struct Array *arr3;
}