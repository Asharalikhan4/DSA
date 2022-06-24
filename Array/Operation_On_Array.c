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


void Append(struct Array *arr,int x){
    //first of all check the free space is availble or not.
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr,int index, int x){
    int i;
    // This function will enter the data in the array at a given index.
    // First of all check the whether the index is right or not.
    if(index>=0 && index<=arr->length){
        for(i = arr->length; i > index; i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index){
    // it will delete a number from a given index.
    int x = 0;
    if(index>=0 && index< arr.length){
        
    }
}

int main(){
    struct Array arr = {{2,3,4,5,6},20,5};
    Insert(&arr,0,10);
    // Append(&arr,10);
    Display(arr);
    return 0;
}