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

int CountNodes(struct Node *p){
    // Counting no of nodes in a linked list.
    int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

void Insert(struct Node *p, int position, int value){
    struct Node *t;  // Creating a temp pointer.
    int i;
    if(position < 0 || position > CountNodes(p)){
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    if(position == 0){
        t->next = first;
        first = t;
    } else {
        for(i = 0; i < position-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}




int main(){
    // int A[] = {3,5,7};
    // create(A,5);
    Insert(first,0,10);
    Insert(first,1,20);
    Insert(first,2,30);
    Display(first);
    return 0;
}