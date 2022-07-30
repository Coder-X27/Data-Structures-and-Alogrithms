#include<iostream>
using namespace std;

#define n 100

class Stack{
    int* arr;
    int top;
    public:
        Stack(){
            arr=new int[n];
            top=-1;
        }
        void push(int x){
            if(top==n){
                cout<<"Stack is full";
                return ;
            }
            top++;
            arr[top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"Stack is empty";
            }
            top--;
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            return false;
        }
        int Top(){
            return arr[top];
        }
        
};

int main(){

    Stack s;
    s.push(10);
    cout<<"Top is -> "<<s.Top()<<endl;
    s.push(20);
    cout<<"Top is -> "<<s.Top()<<endl;
    s.push(30);
    s.push(40);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<"Top is -> "<<s.Top()<<endl;
    s.pop();
    cout<<s.isEmpty()<<endl;
    return 0;
}