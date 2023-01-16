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

        root->data =data;
        root->left = NULL;
        root->right = NULL;
    }

    else if(root->data>data) root->left = insert(root->left,data);

    else root->right = insert(root->right,data);

    return root;
}

int find_max(Node* root){

    if(root==NULL) return -1;

    if(root->right == NULL) return root->data;

    return find_max(root->right);
}

int main(){

    Node* root = NULL;

    root = insert(root,20);
    root = insert(root,10);
    root = insert(root,25);
    root = insert(root,101);
    root = insert(root,5);
    root = insert(root,30);
    root = insert(root,100);

    cout<<find_max(root)<<endl;

}