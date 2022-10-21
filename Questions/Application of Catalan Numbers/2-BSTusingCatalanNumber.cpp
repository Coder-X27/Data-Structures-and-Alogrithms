#include<iostream>
#include<vector>
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

vector<Node*> constructTree(int start,int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftSubtrees=constructTree(start,i-1);
        vector<Node*> rightSubtrees=constructTree(i+1,end);

        for(int j=0;j<leftSubtrees.size();j++){
            Node* left=leftSubtrees[j];
            for(int k=0;k<rightSubtrees.size();k++){
                Node* right=rightSubtrees[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){


    vector<Node*> totalTrees=constructTree(1,4);
    for(int i=0;i<totalTrees.size();i++){
        cout<<i+1<<" : ";
        preorder(totalTrees[i]);
        cout<<endl;
    }
    return 0;
}