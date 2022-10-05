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
int count(Node* root){
    if(root==NULL) return 0;
    return count(root->left)+count(root->right)+1;
}

int sumOfNodes(Node* root){
    if(root==NULL) return 0;
    return sumOfNodes(root->left)+sumOfNodes(root->right)+root->val;
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<sumOfNodes(root);
    return 0;
}