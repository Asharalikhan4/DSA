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

void sortedInsert(struct Node *p,int value){
    struct Node *t;  // to create a node.
    struct Node *q = NULL;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = value;
    t->next = NULL;
    if(first==NULL){
        first = t;
    } else {
        while(p && p->data < value){
            q = p;
            p = p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }else{
            t->next = q->next;
            q->next = t;
        }
    }
}



int main(){
    int A[] = {10,20,30,40,50};
    create(A,5);
    sortedInsert(first,5);
    Display(first);
    return 0;
}