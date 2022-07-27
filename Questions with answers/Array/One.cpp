// Question = Given an array of integers, return the indices of the two numbers that add up to a given target.

#include<bits/stdc++.h>
using namespace std;

int main(){
	// Using the brute force solution.
    int size, number;
    cin>>size>>number;
    vector<int>arr(size,0);
    for(int i = 0; i < size; i++){
    	cin>>arr[i];
    }
    for(int i = 0; i < size; i++){
    	for(int j = i+1; j < size; j++){
    		if(arr[i] + arr[j] == number){
    			cout<<"Indexs are: "<<i<<" "<<j<<endl;
    		}
    	}
    }
    return 0;
}

// here we have two for loops so time compelixity is atlest O(n^2).
// Space complexity -> only storing the array numbers.