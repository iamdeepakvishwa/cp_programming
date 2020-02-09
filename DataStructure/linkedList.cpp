#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
}

void frontPush(Node** head,int newdata){
    /* Create New Node*/
    Node* newNode = new Node();
    /* Insert The Data */
    newNode->data = newdata;
    /* Make next of new node as head */
    newNode->next = (*head);
    /* Now Making Head as point of new Node */
    *head = newNode;
}

void InserAfter(Node* previousNode , int data){
    /* check the given node can't be Null */
    if(previousNode == NULL){
        cout<<"The Given previousNode can't be Null";
        return;
    }
    /* Create new node */
    Node* newNode = new Node();
    /* Insert The Data */
    newNode->data = data;
    /* Make next of new node as next of prev_node */
    newNode->next = previousNode->next;
    /* move the next of prev_node as new_node */
    previousNode->next = newNode;
}

void append(Node** head , int data){
    Node newNode = new Node();
    Node *last = *head;

    newNode->data = data;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }
    while (last->next != NULL) {
        /* code */
        last = last->next;
    }
    last->next = newNode;
    return ;

}
void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main(){
    Node* head = NULL;

    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    cout<<"Created Linked list is: ";
    printList(head);

    return 0;  
}
