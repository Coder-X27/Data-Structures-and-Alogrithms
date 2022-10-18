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

void Postorder(struct Node* root){
    if(root==NULL){
        return ;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val<<" ";
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

Node* buildTree(int postorder[],int inorder[],int start ,int end){
    static int idx = 4;
    if(start>end){
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    Node* curr =new Node(val);

    if(start==end){
        return curr;
    }
    int pos=search(inorder,start,end,val);
    curr->right=buildTree(postorder,inorder,pos+1,end);
    curr->left=buildTree(postorder,inorder,start,pos-1);
    return curr;
}

int main(){

    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};
    Node* root=buildTree(postorder,inorder,0,4);
    Inorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    return 0;
}