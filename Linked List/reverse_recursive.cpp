#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

Node* head;

void reverse(Node* headPoint){

    if(headPoint->next==NULL){

        head = headPoint;

        return;
    }

    reverse(headPoint->next);
    
    Node* nextNode = headPoint->next;

    nextNode->next = headPoint;
    headPoint->next = NULL;

    
}

void insert(int value){


    if(head==NULL){
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = NULL;

        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL) temp = temp->next;

    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    temp->next = newNode;

    return ;
}

void print(){

    Node* temp = head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

int main(){

    head = NULL;

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    print();
    reverse(head);
    print();
}