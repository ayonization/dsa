#include<bits/stdc++.h>
using namespace std;
struct Node {

    int data;
    Node* next;
};

// inserting node at end of the linked list
Node* insert(Node* head, int value){

    if(head == NULL){

        Node* temp = new Node;

        temp->data = value;
        temp->next = NULL;

        head = temp;

        return head;
    }   

    Node * temp = head;

    while(temp->next!=NULL) temp = temp->next;

    Node* temp2 = new Node;

    temp2->data = value;
    temp2->next = NULL;
    temp->next = temp2;

    return head;
}

void print(Node* head){

    if(head == NULL) return;

    cout<<head->data<<" ";

    print(head->next);
}

int main(){

    Node* head = NULL;

    head = insert(head,1);
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    head = insert(head,5);


    print(head);
}