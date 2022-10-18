#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *right,*left;

    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
//5 1 3 4 2 7
Node* BST(Node* root,int key){
    if(root==NULL) return NULL;
    if(root->data==key) return root;
    if(root->data>key){
        return BST(root->left,key);
    }
    return BST(root->right,key);
}

int main(){

    Node* root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(1);
    root->right->left=new Node(5);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(6);
    root->right->right=new Node(8);

    if(BST(root,15)==NULL) cout<<"No Element Found"<<endl;
    else cout<<"Element Present"<<endl;
    return 0;
}