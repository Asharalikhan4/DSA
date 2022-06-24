// Array must be sorted for this search.
// lowerindex must be lower or equal to the greater index.

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

int BinarySearch(struct Array arr, int key){
    //Iterative Binary Search function.
    int low = 0, high = arr.length-1, mid;
    while(low<=high){
        mid = (low+high)/2;
        if(key==arr.A[mid]){
            return mid;
        } else if(key < arr.A[mid]){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int RecBinarySearch(int a[], int low, int high, int key){
    // Recursive Binary Search function.
    int mid;
    if(low <= high){
        mid = (low+high)/2;
        if(key == a[mid]){
            return mid;
        } else  if(key < a[mid]){
            return RecBinarySearch(a, low, mid-1, key);
        } else {
            return RecBinarySearch(a, mid+1, high, key);
        }
    }
    return -1;
}


int main(){
    int index,RecIndex;
    struct Array arr = {{2,3,4,5,6},20,5};
    Display(arr);
    index = BinarySearch(arr,5);
    RecIndex = RecBinarySearch(arr.A,0,arr.length,3);
    printf("Index of key: %d\n",index);
    printf("Index return by recursive binary search function: %d\n",RecIndex);
    return 0;
}

// Notes
/* Here we are using tail recursion. it is always suggested to use the iterative approach in case of tail recursion. */