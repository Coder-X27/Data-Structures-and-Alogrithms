#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertNode(Node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    Node* temp=head;
    Node* n=new Node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteNode(Node* &head,int key){
    // CASE TO DELETE THE FIRST NODE FROM THE LINKED LIST 
    if(key==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    Node* temp=head;
    int count=1;
    while(temp!=NULL && count!=key){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    // CASE TO DELETE THE last NODE FROM THE LINKED LIST 
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    delete(temp);
}

void display(Node* head){
    Node* temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}


int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    // reverse(v.begin(),v.end());
    cout<<v.at(0);
    // cout<<v.end();

    for(auto i:v) cout<<i<<endl;
    // Node* head=NULL;
    // insertNode(head,1);
    // insertNode(head,2);
    // insertNode(head,3);
    // insertNode(head,4);
    // insertAtHead(head,5);
    // display(head);
    // deleteNode(head,1);
    // display(head);
    return 0;
}