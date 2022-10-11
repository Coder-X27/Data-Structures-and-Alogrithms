// GIVEN A BINARY TREE, FLATTTEN IT INTO LINKED LIST IN PLACE . AFTER FLATTENTING LEFT OF EACH NODE SHOUD POINT TO NULL AND RIGHT SHOULD CONTAIN NEXT NODE IN PREORER SEQUENCE.
// IT IS NOT ALLOWED TO USE OTHER DATA STRUCTURES

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

void flatten(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left !=NULL){
        flatten(root->left);
        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node* t=root->right;
        while(t->right != NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}

void Inorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);

    Inorder(root);
    flatten(root);
    cout<<endl;
    Inorder(root);
    return 0;
}