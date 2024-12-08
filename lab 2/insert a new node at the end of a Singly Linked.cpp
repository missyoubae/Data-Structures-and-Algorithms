// Write a C++ program to insert a new node at the end of a Singly Linked
// List [Consider all edge cases].

#include <iostream>
#include <conio.h>

using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void insert_at_end(node **head, int n){
    node* lastnode = new node(n);
    if(*head == NULL) {
        *head = lastnode;
    }
    else {
        node* temp = *head;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next= lastnode;
    }
}

void traverseSLL(node *head){
    node *a = head;
    while(a != NULL){
        cout << a->data <<" ";
        a = a->next;
    }
}


int main() {
    node* head = NULL;

    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);

    cout << "Linked list: ";
    traverseSLL(head);

    getch();
}
