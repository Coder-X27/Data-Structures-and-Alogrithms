#include<iostream>
#include<stack>
using namespace std;

bool balance(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]=='{' ){
            st.push(s[i]);
        }
        else if(s[i]=='[' ){
            st.push(s[i]);
        }
        else if(s[i]==')' && st.top()=='('){
            st.pop();
        }
        else if(s[i]=='}' && st.top()=='{'){
            st.pop();
        }
        else if(s[i]==']' && st.top()=='['){
            st.pop();
        }
    }
    return st.empty();
}

int main(){

    string s="({[()()()(){}[]]})";
    if(balance(s)){
        cout<<"Balanced Parenthesis";
    }
    else{
        cout<<"UnBalanced Parenthesis";
    }
    return 0;
}