// Question : Given a string containing only parantheses, determine if it is valid. The string is valid if all parentheses close.

#include<bits/stdc++.h>
using namespace std;

int valid(string s){
    vector<char> c;
    for(int i = 0; i < s.length; i++){
        if(s.[i] == '('){
            c.push_back('(');
        }else(
            c.pop_back();
        )
    }
    return c.size();
}



int main(){
    string s;
    cin>>s;
    return 0;
}