#include<bits/stdc++.h>
using namespace std;

int get_area(vector<int> a){
    int n=a.size(),ans=0,i=0;
    stack<int> st;
    a.push_back(0);
    while(i<n){
        cout<<"value of I is "<<i<<endl;
        cout<<"value of a[ i] is "<<a[i]<<endl;
        while(!st.empty() and a[st.top()]> a[i]){
            int t=st.top();
            cout<<"value of t is "<<t<<endl;
            int h=a[t];
            cout<<"value of h is "<<h<<endl;
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
            cout<<"value of ans is"<<ans<<endl;
        }
        st.push(i);
        i++;
    }
    cout<<endl;
    return ans;
}

int main(){
    vector<int> a={2,1,5,6,2,3};
    cout<<"The answer is "<<get_area(a);
    return 0;
}