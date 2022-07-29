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

Node* join(Node* &head1,Node* &head2){
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* dummyNode=new Node(-1);
    Node* ptr3=dummyNode;
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    ptr3->next=NULL;
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummyNode->next; 
}

int main(){

    Node* head1=NULL;
    Node* head2=NULL;
    Node* head=NULL;
    insert(head1,1);
    insert(head2,2);
    insert(head1,3);
    insert(head2,4);
    insert(head1,5);
    insert(head2,6);
    insert(head1,9);
    insert(head2,10);
    display(head1);
    display(head2);
    head=join(head1,head2);
    display(head);
    return 0;
}