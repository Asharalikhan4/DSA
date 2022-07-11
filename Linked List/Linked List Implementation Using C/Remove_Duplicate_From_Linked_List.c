/*
For this take two node and comapre them if they are same delete any one of them.
*/


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

void deleteDuplicate(struct Node *p){
    struct Node *q = p->next;
    while(q != NULL){
        if(p->data != q->data){
        p = q;
        q = q->next;
        } else {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}

void Display(struct Node *p){
    // to display the linked list.
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
}




int main(){
    int A[] = {3,5,7,7,15};
    create(A,5);
    deleteDuplicate(first);
    Display(first);
    return 0;
}