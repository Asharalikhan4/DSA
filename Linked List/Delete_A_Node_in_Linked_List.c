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

int deleteNode(struct Node *p, int position){
    struct Node *q;
    int x = -1, i;
    if(position < 1 || position>CountNodes(p)){
        return -1;
    }
    if(position == 1){
        x = first->data;
        q = first;
        first = first->next;
        free(p);
        return x;
    } else {
        for(i = 0; i < position-1; i++){
            q = p;
            p = p->next;
        }
            q->next = p->next;
            x = p->next;
            free(p);
            return x;
    }
}

int main(){
    int A[] = {10,20,30,40,50};
    create(A,5);
    deleteNode(first,2);
    Display(first);
    return 0;
}