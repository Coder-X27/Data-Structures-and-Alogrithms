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
bool getPath(Node* root , int key, vector<int> &path){
    if( root==NULL ) return false;
    path.push_back(root->val);
    if(root->val==key) return true;
    if(getPath(root->left,key,path) || getPath(root->right,key,path)) return true;
    path.pop_back();
    return false;
}
int LCA(Node* root,int n1,int n2){
    vector<int> path1,path2;
    if(!getPath(root,n1,path1)||!getPath(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc=0;pc<path1.size() && path2.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}



int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(5);
    root->right->left->left=new Node(7);
    root->right->right=new Node(6);
    root->left->left=new Node(4);

    int n1=7,n2=6;
    int lca=LCA(root,n1,n2);
    if(lca==-1){
        cout<<"LCA Doesnt Exist!"<<endl;
    }
    else{
        cout<<"LCA: "<<lca<<endl;
    }

    return 0;
}