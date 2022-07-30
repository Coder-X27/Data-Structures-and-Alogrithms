#include<iostream>
#include<stack>
using namespace std;

void infixToPostfix(string s){
    stack<string> st;
    string sample;
    for(int i = 0; i < s.length(); i++){
        if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')){
            sample+=s[i];
        }
        else{
            st.push(s[i]-'0');
        }
    }
    cout<<sample;
}

int main(){

    string s="(a-b/c)*(a/k-l)";
    infixToPostfix(s);
    return 0;
}