#include<iostream>
#include<queue>
using namespace std;

class Stack{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        int n=0;
    }
    void push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        if(q1.empty()){
            cout<<"Nothing to POP";
            exit(0);
        }
        q1.pop();
        n--;
    }
    int top(){
        if(q1.empty()){
            cout<<"Stack is Empty";
            exit(0);
        }
        return q1.front();
    }
    int size(){
        return n;
    }
};

int main(){

    Stack st;
    st.push(1);
    cout<<st.top()<<endl;
    st.push(2);
    cout<<st.top()<<endl;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;
    st.push(6);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}