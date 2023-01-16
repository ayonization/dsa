#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int data){

    if(root == NULL){

        root = new Node;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }

    else if((root->data)>data) root->left = insert(root->left,data);

    else root->right = insert(root->right,data);

    return root;
}
bool search(Node* root,int data){

    if(root == NULL) return false;

    if(root->data == data) return true;

    if(root->data > data) return search(root->left,data);

    else return search(root->right,data);
}
int main(){
    
    Node* root = NULL;

    root = insert(root,25);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,15);


    if(search(root,20)) cout<<"YES"<<endl;

    else cout<<"NO"<<endl;

}