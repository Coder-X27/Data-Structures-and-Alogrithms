#include<iostream>
using namespace std;

#define n 100

class Queue{
    int *arr;
    int front,back;
    public:
        Queue(){
            arr=new int[n];
            front=-1;
            back=-1;
        }
        void enqueue(int x){
            if(back==n-1){
                cout<<"Queue is Full!"<<endl;
                return;
            }
            back++;
            arr[back]=x;
            if(front==-1){
                front++;
            }
        }
        void dequeue(){
            if(front>back ||front==-1){
                cout<<"No elements present in the queue"<<endl;
                return;
            }
            front++;
        }
        int peek(){
            if(front>back ||front==-1){
                cout<<"No element in queue"<<endl;
                return -1;
            }
            return arr[front];
        }
        bool isEmpty(){
            if(front==-1|| front>back){
                return true;
            }
            return false;
        }
};

int main(){

    Queue q;
    q.enqueue(1);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.enqueue(2);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.enqueue(3);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.isEmpty();
    return 0;
}