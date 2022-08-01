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