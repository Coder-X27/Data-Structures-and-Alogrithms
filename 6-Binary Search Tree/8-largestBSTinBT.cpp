#include<iostream>
#include<climits>
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

struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;    
};


Info largestBST(Node* root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL){
        return {1,root->data,root->data,1,true};
    } 
    Info leftInfo=largestBST(root->left);
    Info rightInfo=largestBST(root->right);

    Info curr;
    curr.size=(1+leftInfo.size+rightInfo.size);
    
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max<root->data && rightInfo.min>=root->data){
        curr.min=min(leftInfo.min,min(rightInfo.min,root->data));
        curr.max=max(rightInfo.max,max(leftInfo.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(leftInfo.ans,rightInfo.ans);
    curr.isBST=false;
    return curr;
}

int main(){
    Node* root1=new Node(15);
    root1->left=new Node(20);
    root1->left->left=new Node(5);
    root1->right=new Node(30);
    cout<<"Largest BST in BT:"<<largestBST(root1).ans<<endl;
    return 0;
}
