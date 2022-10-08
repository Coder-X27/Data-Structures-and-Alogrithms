#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

void sumReplacement(Node* root){
    if(root==NULL) return ;

    sumReplacement(root->left);
    sumReplacement(root->right);

    if(root->left !=NULL){
        root->val+=root->left->val;
    }
    if(root->right !=NULL){
        root->val+=root->right->val;
    }
}

void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    preorder(root);
    sumReplacement(root);
    cout<<endl;
    preorder(root);
    return 0;
}