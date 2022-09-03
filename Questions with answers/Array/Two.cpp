// Question = You are given an array of positive integer where each integer represents the height of a vertical line on a chart. find two lines which together with the x-axis forms a container that would hold the greatest amount of water. Return area of water it would hold.

#include<bits/stdc++.h>
using namespace std;

int areaOfWater(vector<int> &arr){
    /*

    // Using brute force.
    
    int ans = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            int height = min(arr[i],arr[j]);
            int width = j - i;
            if(height * width > ans){
                ans = height * width;
            }
        }
    }
    return ans;
    // time complexity: O(n^2);
    // space complexity: O(1);

    */

    // optimized solution
    int p1 = 0, p2 = arr.size()-1, ans = 0;
    while(p1 < p2){
        int height = min(arr[p1], arr[p2]);
        int width = p2 - p1;
        if(arr[p1] < arr[p2]){
            p1++;
        }else{
            p2--;
        }
        if(height * width > ans){
            ans = height * width;
        }
    }
    return ans;
}

int main(){
    vector<int>arr{4,8,1,2,3,9};
    cout<<areaOfWater(arr);
    return 0;
}