#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st){
    printf("Enter size:\n");
    scanf("%d",&st->size);
    st->top = -1;
    st->S = (int*)malloc(st->size*sizeof(int));
}

void display(struct Stack st){
    int i;
    printf("Elements in Stack:\n");
    for(i = st.top; i >= 0; i--){
        printf("%d\n",st.S[i]);
    }
    printf("\n");
}

void push(struct Stack *st, int data){
    if(st->top == st->size-1){
        printf("Stack Overflow\n");
    }else {
        st->top++;
        st->S[st->top] = data;
    }
}

int peek(struct Stack st, int index){
    // Top element is said to be first position.
    int peekValue = -1;
    if(st.top-index+1<0){
        printf("Invalid Index\n");
    }
    peekValue = st.S[st.top-index+1];
    return peekValue;
}

int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    printf("Value at the given index: %d",peek(st,2));
    return 0;
}