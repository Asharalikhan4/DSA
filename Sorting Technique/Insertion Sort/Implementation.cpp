#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
    int i, j, x;
    for(i = 1; i < n; i++){
        j = i - 1;
        x = arr[i];
        while(j > -1 && arr[j] > x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

int main(){
    int arr[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    InsertionSort(arr,n);
    for(i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}