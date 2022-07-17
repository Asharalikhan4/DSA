#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *S;
};

void push(struct *st, int data){
    if(st->top == st->size-1){
        printf("Stack Overflow\n");
    }else {
        st->top++;
        st->s[st->top] = data;
    }
}

int main(){
    struct stack st;
    printf("Enter the size of the stack:\n");
    scanf("%d",&st.size);
    st.S = (int*)malloc(st.size*sizeof(int));
    st.top = -1;
    push(10);
    return 0;
}