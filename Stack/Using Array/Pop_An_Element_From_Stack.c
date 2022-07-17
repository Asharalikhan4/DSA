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

int pop(struct *st){
    int popValue = -1;
    if(st->top == -1){
        printf("Stack is empty.\n");
    }else{
        popValue = st->s[st->top];
        st->top--; 
    }
    return popValue;
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

// time taken is constant in push and pop.