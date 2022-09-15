#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[] = {2,4,5,8,6,7,9,2,3};
    int num_to_be_found = 4;
    int len = sizeof(num)/sizeof(num[0]);
    // Complexity of function below down is O(n) called as Big-Oh of n.
    // It has linear time. here the time inc as the element inc in the array.
    for(int i = 0; i < len; i++){
        if(num[i] == num_to_be_found){
            cout<<"Number found"<<endl;
        }
    }
    return 0;
}