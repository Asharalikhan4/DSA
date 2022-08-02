#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n){
    int i, j, flag = 0;
    for(i = 0; i < n; i++){
        flag = 0;
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}

int main(){
    int arr[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    BubbleSort(arr,n);
    for(i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}