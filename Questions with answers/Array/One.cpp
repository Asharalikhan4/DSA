// Question = You are given an array of positive integer where each integer represents the height of a vertical line on a chart. find two lines which together with the x-axis forms a container that would hold the greatest amount of water. Return area of water it would hold.

#include<bits/stdc++.h>
using namespace std;

int areaOfWater(vector<int> arr){
    // Using brute force.
    int ans = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] * arr[j] > ans){
                ans = arr[i] * arr[j];
            }
        }
    }
    return ans;
}

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(4);
    cout<<areaOfWater(arr);
    return 0;
}

// here we have two for loops so time compelixity is atlest O(n^2).
// Space complexity -> only storing the array numbers.