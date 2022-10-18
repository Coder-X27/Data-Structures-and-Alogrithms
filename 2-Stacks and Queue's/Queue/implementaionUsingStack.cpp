#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
        void enqueue(int x){
            s1.push(x);
        }
        void pop(){
            if(s1.empty() && s2.empty()){
                cout<<"Nothing to POP"<<endl;
                return ;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int topElem=s2.top();
            s2.pop();
            cout<<topElem<<endl;
        }
        bool empty(){
            if(s1.empty() && s2.empty()){
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
    q.enqueue(4);
    q.enqueue(5);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.enqueue(5);
    q.pop();
    q.pop();
    return 0;
}