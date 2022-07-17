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
    for(i = st.top; i >= 0; i--){
        printf("%d",st.S[i]);
    }
    printf("\n");
}

int main(){
    struct Stack st;
    create(&st);
    delete []S;
    return 0;
}