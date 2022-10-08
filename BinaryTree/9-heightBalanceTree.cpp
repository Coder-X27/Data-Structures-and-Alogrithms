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
int height(Node* root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}

// bool isBalanced(Node* root){ //Time COMPLEXITY IS O(n^2)
//     if(root==NULL) return true;

//     if(!isBalanced(root->left)) return false;
//     if(!isBalanced(root->right)) return false;

//     int lh=height(root->left);
//     int rh=height(root->right);
//     if(abs(lh-rh)<=1){
//         return true;
//     } else{
//         return false;
//     }
// }
bool isBalanced(Node* root,int* height){ //Time COMPLEXITY IS O(n)
    if(root==NULL) return true;
    int lh=0,rh=0;
    if(!isBalanced(root->left,&lh)) return false;
    if(!isBalanced(root->right,&rh)) return false;
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    } else{
        return false;
    }
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    // if(isBalanced(root)){
    //     cout<<"Balanced Tree";
    // } else{
    //     cout<<"UnBalanced Tree";
    // }
    
        // OPTIMIZED VERSION 
    int height=0;
    if(isBalanced(root,&height)){
        cout<<"Balanced Tree";
    } else{
        cout<<"UnBalanced Tree";
    }
    return 0;
}