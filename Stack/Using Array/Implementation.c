#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *S;
};

int main(){
    struct stack st;
    printf("Enter the size of the stack:\n");
    scanf("%d",&st.size);
    st.S = (int*)malloc(st.size*sizeof(int));
    st.top = -1;
    return 0;
}