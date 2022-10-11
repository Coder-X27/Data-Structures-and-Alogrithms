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

void printSubTree(Node* root,int k){
    if(root==NULL || k<0 ){
        return ;
    }
    if(k==0){
        cout<<root->val<<" ";
        return;
    }
    printSubTree(root->left,k-1);
    printSubTree(root->right,k-1);

}

int printNodeAtk(Node* root,Node* target,int k){
    if(root==NULL ){
        return -1;
    }
    if(root==target){
        printSubTree(root,k);
        return 0;
    }
    int dl=printNodeAtk(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->val<<" ";
        }
        else{
            printSubTree(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=printNodeAtk(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->val<<" ";
        }
        else{
            printSubTree(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}


int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);

    printNodeAtk(root,root->left,1);
    return 0;
}