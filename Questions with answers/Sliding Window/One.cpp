// Question - Given an array of integers, find two contiguous integers that form the greatest sum.

#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &a){
    // Using brute force.
    int ans = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        if(a[i] + a[i+1] > ans){
            ans = a[i] + a[i+1];
        }
    }
    return ans;
}



int main(){
    vector<int> a{1,3,7,9,2,4};
    cout<<sum(a)<<endl;
    return 0;
}