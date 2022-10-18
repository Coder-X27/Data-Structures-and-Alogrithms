#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next=NULL;
    }
};

void insert(Node* &head, int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n; 
}
void insertAtBegin(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
    }
    n->next=head;
    head=n;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(key==temp->data){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    Node* head=NULL;
    insert(head,1);
    insert(head,2);
    insertAtBegin(head,4);
    display(head);
    if (search(head,4)){
        cout<<endl<<"Key is Present";
    }
    else{
        cout<<endl<<"No key Found";
    }
    return 0;
}