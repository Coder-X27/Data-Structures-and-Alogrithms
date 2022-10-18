#include <iostream>
#include <stack>
using namespace std;

int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string reverse(string s){
    stack<char> st;
    string sample="";
    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        if(st.top()=='('){
            st.pop();
            st.push(')');
        }
        else if(st.top()==')'){
            st.pop();
            st.push('(');
        }
        sample+=st.top();
        st.pop();
    }
    return sample;
}
string infixToPostfix(string s)
{
    stack<char> st;
    string sample;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            sample += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if(s[i] == '('){
            while(!st.empty() && st.top()!=')'){
                sample+=st.top();
                st.pop();
            }
            if(st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty()&& precedence(st.top())>=precedence(s[i])){
                sample+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        sample+=st.top();
        st.pop();
    }
    return sample;
}

int main()
{

    string s = "(a-b/c)*(a/k-l)";
    cout<<infixToPostfix(s);
    return 0;
}