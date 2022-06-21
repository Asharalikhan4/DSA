#include <stdio.h>

int fac(int num){
    if(num==0 || num==1){
        return 1;
    } else {
        return fac(num-1)*num;
    }
}



int main(){
    int num, factorial;
    printf("Enter the number:\n");
    scanf("%d",&num);
    factorial = fac(num);
    printf("Factorial of %d is %d.",num,factorial);
    return 0;
}