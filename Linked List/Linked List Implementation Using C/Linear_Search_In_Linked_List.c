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

int Search(struct Node *p, int key){
    // to search a key in linked list.
    while(p != NULL){
        if(key == p->data){
            return p;
        }
        p = p->next;
    }
    return -1;
}



int main(){
    int A[] = {3,5,7,10,15};
    create(A,5);
    Display(first);
    printf("%d",Search(first,7));
    return 0;
}