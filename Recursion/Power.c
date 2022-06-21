#include <stdio.h>

int power(int num, int pow){
    if(pow==0){
        return 1;
    } else {
        return power(num,pow-1)*num;
    }
}


int main(){
    int num,pow,ans;
    printf("Enter the number and power:\n");
    scanf("%d%d",&num,&pow);
    ans = power(num,pow);
    printf("Final answer is %d\n",ans);
    return 0;
}