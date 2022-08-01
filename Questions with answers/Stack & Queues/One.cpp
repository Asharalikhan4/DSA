// Question : Given a string containing only parantheses, determine if it is valid. The string is valid if all parentheses close.


#include<bits/stdc++.h>
using namespace std;


unordered_map<char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
int isValid(string s){
    stack<char> st;
    for(char bracket:s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }else{
            if(st.empty()) return 0;
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0) return 0;
        }
    }
    return st.empty();
}


int main(){
    string s = "{[()]}}";
    if(isValid(s)){
        cout<<"parenthesis are matched"<<endl;
    }else{
        cout<<"parenthesis are not matched"<<endl;
    }
    return 0;
}