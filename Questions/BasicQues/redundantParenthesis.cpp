#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    stack<char> st;
    bool answer=false;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='/' or s[i]=='*'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                answer=true;
            }
            while(st.top()=='+' or st.top()=='-' or st.top()=='/' or st.top()=='*'){
                st.pop();
            }
            st.pop();
        }
    }   
    cout<<answer<<endl;
    return 0;
}