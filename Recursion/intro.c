#include <stdio.h>

void rec(int n){
    if(n>0){
    rec(n-1);
    printf("%d\n",n);
    }
}


int main(){
    int x = 10;
    printf("To print n natural number:\n");
    rec(x);
    return 0;
}