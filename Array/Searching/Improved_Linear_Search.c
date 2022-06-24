/* There are mainly two ways to improve the Linear Search 
1. Swaping near elements - this method we've seen in this is program
2. Move to Head - for this method write the index 0 in swap function second entry inside the Linear Search function. */
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

// function below down is used for the improvement.
void Swap(int *x, int *y){
    // Call by address function hence we are using pointer.
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key){
    // function for searching and returning their index.
    // Call by address function.
    int i;
    for(i = 0; i < arr->length; i++){
        if(key==arr->A[i]){
            Swap(&arr->A[i],&arr->A[i-1]);  // change to be done in this line for the move to head method.
            return i;
        }
    }
    return -1;
}




int main(){
    int index;
    struct Array arr = {{2,3,4,5,6},20,5};
    Display(arr);
    index = LinearSearch(&arr,4);
    printf("Index of key : %d\n",index);
    Display(arr);  // Array's element swapped.
    return 0;
}