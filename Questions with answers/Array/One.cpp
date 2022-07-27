// Question = Given an array of integers, return the indices of the two numbers that add up to a given target.

// How to approch a problem

//1.  Verify the constraints.(ask question about the question)
//2. Write out some test cases. 
//3. Figure out a solution without a code.
//4. Write out our solution in code.
//5. Double check for errors.
//6. Test the code with all the test cases.
//7. Space and time complexity.
//8. Optimize solution.

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