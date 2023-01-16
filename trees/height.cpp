#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root,int data){

    if(root==NULL){

        root = new Node;

        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }

    else if(root->data>data) root->left = insert(root->left,data);

    else root->right = insert(root->right,data);

    return root; 
}

int find_height(Node* root){

    if(root==NULL) return -1;

    else return 1+max(find_height(root->left),find_height(root->right));
}

int main(){ 

    Node* root = NULL;

    root = insert(root,25);
    root = insert(root,20);
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);

    cout<<find_height(root)<<endl;
}