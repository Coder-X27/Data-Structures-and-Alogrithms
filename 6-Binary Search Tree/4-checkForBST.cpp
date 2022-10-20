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

bool isBST(Node* root,Node* min=NULL , Node* max=NULL){
    if(root==NULL) return true;
    if(min!=NULL && root->data<=min->data) return false;
    if(max!=NULL && root->data>=max->data) return false;
    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max);
    return leftValid && rightValid;
}

int main(){
    Node* root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(1);
    root->right->left=new Node(5);
    root->right->left->left=new Node(15);
    root->right->left->right=new Node(6);
    root->right->right=new Node(8);

    if(isBST(root)) cout<<"Valid Binary Search Tree!"<<endl;
    else cout<<"Invalid Binary Search Tree!"<<endl;
    return 0;
}