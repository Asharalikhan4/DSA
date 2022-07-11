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

int checkSorted(struct Node *p){
    // To check whether the linked is sorted or not.
    int x = -65536;
    while(p != NULL){
        if(p->data < x){
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
}

int main(){
    int A[] = {10,20,80,40,50};
    create(A,5);
    display(first);
    if(checkSorted(first)){
        printf("The linked list is sorted.\n");
    } else {
        printf("The liked list is unsorted.\n");
    }
    return 0;
}