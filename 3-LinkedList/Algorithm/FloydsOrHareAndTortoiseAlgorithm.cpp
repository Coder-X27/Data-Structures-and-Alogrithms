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
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
};

bool detectCycle(Node* head){
    Node* fast;
    Node* slow;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void makeCycle(Node* &head,int pos){
    Node* temp=head;
    Node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

void removeCycle(Node* &head){
    Node* slow=head;
    Node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while (fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}
int main(){

    Node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,10);
    // we are making a cycle at value 4
    makeCycle(head,4);
    // detecting wheather a cycle is present in a linked list or not
    detectCycle(head);
    // if we have cycle here then we can remove this cycle by using the function that we created for our linked list 
    removeCycle(head);
    //again detecting wheather a cycle is present in a linked list or not thistime this will result in 0;
    detectCycle(head);
    display(head);
    
    return 0;
}