#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

Node* head;

void insert_at_beginning(int value){

    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void print(){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

     head = NULL;

     int n;
     cin>>n;

     int a[n];

     for (int i = 0; i < n; i++)
     {
        cin>>a[i];

        insert_at_beginning(a[i]);

     }

     print();
       
}