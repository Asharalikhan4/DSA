// Question: Given a string only containing round brackets '(' and ')' and lowercase characters, remove the least amount of brackets so the string is valid. A string is considered valid if it is empty or if there are brackets, they all close.

#include<bits/stdc++.h>
using namespace std;

string minRemoveToMakeValid(string s){
	stack<int> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			st.push(i);
		}else if(s[i] == ')'){
			if(!st.empty()){
				st.pop();
			}else{
				s[i] = '*';
			}
		}
	}
		while(!st.empty()){
			s[st.top()] = '*';
			st.pop();
		}
		
		string ans = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] != '*'){
				ans += s[i];
			}
		}
	return ans;
}


int main(){
	string s = ")))))(cd)";
	cout<<minRemoveToMakeValid(s);
	return 0;
}