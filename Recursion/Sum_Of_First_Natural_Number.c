#include <stdio.h>

int fun(int num){
    if(num==0){
        return 0;
    } else {
        return fun(num-1)+num;
    }
}


int main(){
    int sum, terms;
    printf("Enter the number of terms you want:\n");
    scanf("%d",&terms);
    sum = fun(terms);
    printf("Sum of first %d natural number : %d",terms,sum);
    return 0;
}