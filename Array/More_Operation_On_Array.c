#include <stdio.h>

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

void Get(struct Array arr, int index){
    // Function will tell the value store at this index
    if(index>=0 && index<arr.length){
        printf("Value at given inedx : %d\n",arr.A[index]);
    }
}

void Set(struct Array arr, int value, int index){
    // this function will set the value at the given index
    if(index>=0 && index<arr.length){
        printf("Value at given inedx : %d\n",arr.A[index]);
    }
}


int main(){
    struct Array arr = {{2,3,4,5,6},20,5};
    Display(arr);
    Get(arr,3);
}