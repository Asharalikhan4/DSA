// Question: Given a linked list and numbers m and n, return it back with only position m to n in reverse.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    private:
    Node *first;
    public:
    // below down is constructor.
    LinkedList(){
        first = NULL;
    }
    LinkedList(int A[], int n);  // to create a linked list from an array.
    // below down is destructor
    ~LinkedList();
    void Display();
    void Insert(int position, int data);
    int Delete(int position);
    int Length();
    int reverseWithLimit(int m, int n);
};

// Now we are going to use the scope resolution.
LinkedList::LinkedList(int A[], int n){
    Node *last, *t;
    int i = 0;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

LinkedList::~LinkedList(){
    Node *p = first;
    while(first){
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display(){
    Node *p = first;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int LinkedList::Length(){
    Node *p = first;
    int len = 0;
    while(p != NULL){
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList::Insert(int position, int data){
    Node *t,*p = first;
    if(position < 0 || position > Length()){
        return;
    }
    t = new Node;
    t->data = data;
    t->next = NULL;
    if(position == 0){
        first = t;
    } else {
        for(int i = 0; i < position-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList::Delete(int position){
    Node *p, *q = NULL;
    int x = -1;
    if(position < 1 || position > Length()){
        return -1;
    }
    if(position == 1){
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    } else {
        p = first;
        for(int i = 0; i < position-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

void LinkedList::reverseWithLimit(int m, int n){
    Node* current = first;
    Node *next = NULL, *prev = NULL;
    while(current )
}


int main(){
    int A[] = {1,2,3,4,5};
    LinkedList l(A,5);
    l.Display();
    return 0;
}