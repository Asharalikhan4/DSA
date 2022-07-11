#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n){
    int i;
    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i < n; i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p){
    // to display the linked list.
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
}

int Max(struct Node *p){
    int max = -32768;
    while(p != 0){
        if(max < p->data){
            max = p->data;
            p = p->next;
        }
    }
    return max;
}



int main(){
    int A[] = {3,5,7,10,15};
    create(A,5);
    Display(first);
    printf("Max element in linked list : %d",Max(first));
    return 0;
}