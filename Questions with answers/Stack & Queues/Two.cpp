// Question: Given a string only containing round brackets '(' and ')' and lowercase characters, remove the least amount of brackets so the string is valid. A string is considered valid if it is empty or if there are brackets, they all close.

#include<bits/stdc++.h>
using namespace std;


int main(){
	string s = "a)bc(cd)";
	int n = s.length();
	char a[n+1];
	strcpy(a,s.c_str());
	for(int i = 0; i < n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}