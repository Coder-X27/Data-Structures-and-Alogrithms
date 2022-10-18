#include<iostream>
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

void Preorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->val<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}

int search(int inorder[],int start ,int end,int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int start ,int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node =new Node(curr);

    if(start==end){
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
    return node;
}

int main(){

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    Node* root=buildTree(preorder,inorder,0,4);
    Inorder(root);
    cout<<endl;
    Preorder(root);
    return 0;
}