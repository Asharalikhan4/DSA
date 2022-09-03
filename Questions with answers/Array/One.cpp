// Question = Given an array of integers, return the indices of the two numbers that add up to a given target.

#include<bits/stdc++.h>
using namespace std;

int main(){
	int answer = 11;
    vector<int>arr{1,3,7,9,2};
    for(int i = 0; i < arr.size(); i++){
    	for(int j = i+1; j < arr.size(); j++){
    		if(arr[i] + arr[j] == answer){
    			cout<<i<<" "<<j<<endl;
    			break;
    		}
    	}
    }
    return 0;
}