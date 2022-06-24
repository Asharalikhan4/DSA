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
    // this function will tell the value at the given index.
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr, int index, int value){
    // this function will set the value at the given index.
    if(index>=0 && index<arr->length){
        return arr->A[index] = value;
    }
}

int Max(struct Array arr){
    // this function will return the maximum value in an array.
    int i, max = arr.A[0];
    for(i = 0; i < arr.length; i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    // this function will return the minimum value in an array.
    int i, min = arr.A[0];
    for(i = 0; i < arr.length; i++){
        if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    // this function will sum up all the elements in the array.
    int i, sum = 0;
    for(i = 0; i < arr.length; i++){
        sum += arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr){
    // this function is to calculate average of an array.
    int i, avg, sum = 0;
    for(i = 0; i < arr.length; i++){
        sum += arr.A[i];
    }
    avg = sum/arr.length;
    return avg;
}


int main(){
    struct Array arr = {{2,3,4,5,6},20,5};
    printf("%d\n",Get(arr,2));
    printf("%d\n",Set(&arr,2,15));
    printf("%d\n",Max(arr));
    printf("%d\n",Min(arr));
    printf("%d\n",Sum(arr));
    printf("%f\n",Avg(arr));
    return 0;
}