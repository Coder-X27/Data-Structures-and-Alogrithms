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

Node* sortedArray(int arr[],int start ,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);

    root->left=sortedArray(arr,start,mid-1);
    root->right=sortedArray(arr,mid+1,end);

    return root;
}

void preOrder(Node* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    int arr[]={10,20,30,40,50};
    Node* root=sortedArray(arr,0,4);
    preOrder(root);
    return 0;
}