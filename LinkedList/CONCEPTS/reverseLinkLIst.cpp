#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insert(Node* &head, int val){
    Node *n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
};

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
};
// iterative approach
Node* reverseLL(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
Node* reverseLLR(Node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* newhead=reverseLLR(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int main(){
    Node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    // ITERATIVE APPROACH
    // head=reverseLL(head);
    // display(head);

    // RECURSIVE APPROACH
    head=reverseLLR(head);
    display(head);
    
    return 0;
}