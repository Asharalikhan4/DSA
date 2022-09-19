#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[] = {'a','b','c','d','e','f'};
    int length = sizeof(arr)/sizeof(arr[0]);
    // Here we have nested loops.
    for(int i = 0; i < length; i++){
        for(int j = i+1; j < length; j++){
            cout<<arr[i]<<arr[j]<<endl;
        }
    }
    return 0;
}

// Time complexiy is O(n↑2) which is called Big Oh of n square.