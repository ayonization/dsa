#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};


Node* head;

void insert_at_nth(int value,int n){

    if(n==1){

        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = head;

        head = newNode;

        return;
    }

    Node* temp = head;

    for(int i = 0;i<n-2;i++) temp = temp->next;

    Node* temp2 = new Node;

    temp2->data = value;
    temp2->next = temp->next;

    temp->next = temp2;

    return;

}
void print(){

    Node* temp = head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return;
}
int main(){

    insert_at_nth(2,1);
    insert_at_nth(3,2);
    insert_at_nth(4,1);
    insert_at_nth(5,2);
    
    print();

}