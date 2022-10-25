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

bool isIdentical(Node* root1,Node* root2){
    if(root1==NULL&& root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool con1=root1->data==root2->data;
        bool con2=isIdentical(root1->left,root2->left);
        bool con3=isIdentical(root1->right,root2->right);
        if(con1 && con2 && con3){
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}


int main(){
    Node* root1=new Node(1);
    root1->left=new Node(2);
    root1->right=new Node(3);

    Node* root2=new Node(1);
    root2->left=new Node(2);
    root2->right=new Node(3);
    if(isIdentical(root1,root2)){
        cout<<"Tree is identical"<<endl;
    }
    else{
        cout<<"Tree is not identical."<<endl;
    }

    // root1->left->left=new Node(4);
    // root1->right->left=new Node(5);
    // root1->right->left->left=new Node(15);
    // root1->right->left->right=new Node(6);
    // root1->right->right=new Node(8);

    return 0;
}
