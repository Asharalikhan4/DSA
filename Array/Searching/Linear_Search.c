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

int LinearSearch(struct Array arr, int key){
    // function for searching and returning their index. we use the dot operator when it's call by value and arrow when there is call by address.
    int i;
    for(i = 0; i < arr.length; i++){
        if(key==arr.A[i]){
            return i;
        }
    }
    return -1;
}


int main(){
    int index;
    struct Array arr = {{2,3,4,5,6},20,5};
    Display(arr);
    index = LinearSearch(arr,4);
    printf("Index of key : %d\n",index);
    return 0;
}