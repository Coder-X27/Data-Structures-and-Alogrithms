#include<iostream>
#include<stack>
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

void zigzag(Node* root){
    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    bool leftToRight=true;
    currLevel.push(root);
    while(!currLevel.empty()){
        Node* temp=currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        }
        if(leftToRight){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
        else{
            if(temp->right){
                nextLevel.push(temp->right);
            }
            if(temp->left){
                nextLevel.push(temp->left);
            }
        }
    }
    if(currLevel.empty()){
        leftToRight=!leftToRight;
        swap(currLevel,nextLevel);
    }
}

int main(){

    return 0;
}