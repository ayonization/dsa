#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root,int data){

    if(root == NULL){

        root = new Node;

        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }

    else if(root->data>data) root->left = insert(root->left,data);

    else root->right = insert(root->right,data);

    return root;
}

void level_order(Node* root){

    if(root == NULL) return;

    queue<Node*> q;

    q.push(root);

    while(q.size()){

        Node* curr = q.front();

        cout<<curr->data<<" ";

       if(curr->left!=NULL) q.push(curr->left);
       if(curr->right!=NULL) q.push(curr->right);
        q.pop(); 
    }

    return;
}

void pre_order(Node* root){

    if(root == NULL) return;

    cout<<root->data<<" ";

    pre_order(root->left);
    pre_order(root->right);
}

void in_order(Node* root){

    if(root == NULL) return;

    in_order(root->left);

    cout<<root->data<<" ";

    in_order(root->right);
}

int main(){

    Node* root = NULL;

    root = insert(root,25);
    root = insert(root,10);
    root = insert(root,15);
    root = insert(root,50);
    root = insert(root,30);

    in_order(root);

}