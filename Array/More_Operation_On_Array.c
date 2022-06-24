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

int Get(struct Array arr, int index){
    
}


int main(){
    struct Array arr = {{2,3,4,5,6},20,5};
}