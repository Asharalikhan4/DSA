//Question: Given two strings S and T, return if they equal when both are typed out. Any '#' that appears in the string counts as a backspace.

#include<bits/stdc++.h>
using namespace std;
   
string getString(string &str) {
        int n=str.length(), count=0;
        string result="";
        for(int i=n-1; i>=0; i--) {
            char ch=str[i];
            if(ch=='#') 
                count++;
            else {
                if(count>0)
                    count--;
                else {
                    result+=ch;
                }                     
            }
        }
        return result;       
    }
};


int main(){
    string s = "b", t = "a";
    if(compareString(s,t)){
        cout<<"They are equal"<<endl;
    }else{
        cout<<"They are not equal"<<endl;
    }
    return 0;
}