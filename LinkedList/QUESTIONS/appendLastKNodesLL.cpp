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
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
};
int length(Node* head){
    Node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* appendKNodes(Node* &head,int val){
    Node* tail=head;
    Node* newHead;
    Node* newTail;
    int l=length(head);
    int count=1;
    while(tail->next!=NULL){
        if(count==l-val){
            newTail=tail;
        }
        if(count==l-val+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}
int main(){

    Node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    display(head);
    head=appendKNodes(head,3);
    display(head);
    return 0;
}