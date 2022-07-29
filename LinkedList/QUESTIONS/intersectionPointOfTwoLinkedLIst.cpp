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
int intersection(Node* &head1,Node* &head2){
    Node* temp1=head1;
    Node* temp2=head2;
    int len1=length(head1);
    int len2=length(head2);
    int diff,count=1;
    if(len1>len2){
        diff=len1-len2;
        while(temp1->next!=NULL){
            if(count==diff){
                temp1=temp1->next;
                break;
            }
            temp1=temp1->next;
            count++;
        }
    }
    else if(len1<len2){
        diff=len2-len1;
        while(temp2->next!=NULL){
            if(count==diff){
                temp2=temp2->next;
                break;
            }
            temp2=temp2->next;
            count++;
        }
    }
    else{
        diff=0;
    }
    while(temp1->next!=NULL && temp2->next!=NULL){
        if(temp1->data==temp2->data){
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1->data;
}

int main(){

    Node* head1=NULL;
    Node* head2=NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    insert(head2,9);
    insert(head2,10);
    insert(head2,5);
    insert(head2,6);
    cout<<intersection(head1,head2);
    return 0;
}