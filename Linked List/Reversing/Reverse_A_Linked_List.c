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

void display(struct Node *p){
    // to display the linked list.
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
}

int countNodes(struct Node *p){
    // Counting no of nodes in a linked list.
    int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

void Reverse(struct Node *p){
    // this function will reverse the linked list.
    struct Node *q = NULL, *r = NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int main(){
    int A[] = {10,20,80,40,50};
    create(A,5);
    display(first);
    Reverse(first);
    printf("Linked list after reverse function:\n");
    display(first);
    return 0;
}