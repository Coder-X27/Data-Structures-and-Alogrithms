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

int heightOfTree(Node* root){
    if(root==NULL) return 0;
    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);

    return max(lHeight, rHeight)+1;
}

// int diameterOfTree(Node* root){ //Time Complexity is O(n^2)
//     if(root==NULL) return 0;
//     int lHeight = heightOfTree(root->left);
//     int rHeight = heightOfTree(root->right);
//     int currDiameter=lHeight+rHeight+1;

//     int lDiameter = diameterOfTree(root->left);
//     int rDiameter = diameterOfTree(root->right);

//     return max(currDiameter,max(lDiameter, rDiameter));
// }
int diameterOfTree(Node* root, int* height){ //Time Complexity is O(n)
    if(root==NULL){
        *height=0;
        return 0;
    } 
    int lh=0,rh=0;
    int lDiameter=diameterOfTree(root->left,&lh);
    int rDiameter=diameterOfTree(root->right,&rh);
    int currDiameter=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currDiameter,max(lDiameter, rDiameter));
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    cout<<heightOfTree(root)<<endl;
    // cout<<diameterOfTree(root)<<endl;
    // OPTIMIZED SOLUTION 
    int height=0;
    cout<<diameterOfTree(root,&height)<<endl;
    return 0;
}