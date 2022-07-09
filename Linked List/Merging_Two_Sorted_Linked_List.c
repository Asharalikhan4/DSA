#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first = NULL,*second = NULL,*third = NULL;

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

void create2(int A[], int n){
    // function to create another linked list.
    int i;
    struct Node *t,*last;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

    for(int i = 1; i < n; i++){
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node* p){
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

void merge(struct Node *p, struct Node *q){
    // function to merge two sorted linked list in a sorted manner.
    struct Node *last;
    if(p->data < q->data){
        third = last = p;
        p = p->next;
        third->next = NULL;
    } else {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        } else {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p){
        last->next = p;
    }
    if(q){
        last->next = q;
    }
}

int main(){
    int A[] = {10,20,80,40,50};
    int B[] = {5,15,25,35,45};
    create(A,5);
    create2(B,5);
    merge(first,second);
    printf("Linked list after merging:\n");
    display(third);
    return 0;
}