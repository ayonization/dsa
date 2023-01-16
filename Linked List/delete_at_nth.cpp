#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

Node* head;

void delete_at_nth(int n){

    if(n==1){

        Node* temp = head;

        head = temp->next;

        delete(temp);

        return;
    }

    Node* temp = head;

    for(int i = 0;i<n-2;i++) temp = temp->next;

    Node* temp2 = temp->next;

    temp->next = temp2->next;

    delete(temp2);

    return;



}
void insert(int value){

    if(head == NULL){

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

    return;
}

void print(){

    Node* temp = head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    return;
}

int main(){

    head = NULL;

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    print();

    delete_at_nth(3);

    print();

    delete_at_nth(1);

    print();

    delete_at_nth(2);

    print();
}