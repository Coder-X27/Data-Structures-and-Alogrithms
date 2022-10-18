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
class Queue{
    Node* front;
    Node* back;
    public:
        Queue(){
            front=NULL;
            back=NULL;
        }
        void enqueue(int val){
            Node* n=new Node(val);
            if(front==NULL){
                back=n;
                front=n;
                return;
            }
            back->next=n;
            back=n;
        }
        void dequeue(){
            if(front==NULL){ 
                cout<<"Nothing to POP up!"<<endl;
                return;
            }   
            Node* delNode=front;
            front=front->next;
            delete(delNode);
        }
        void peek(){
            Node* temp=front;
            if(temp==NULL){
                cout<<"No LL Present"<<" ";
            }
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL\n";
        }
        bool isEmpty(){
            if(front==NULL){
                return true;
            }
            return false;
        }
};

int main(){

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    cout<<q.isEmpty();
    return 0;
}