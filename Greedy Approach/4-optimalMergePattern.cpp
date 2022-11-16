#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        v.push_back(sum);
    }
    sum=0;
    sort(v.begin(),v.end(),greater<int>());
    v.pop_back();
    sort(v.begin(),v.end());
    for(auto i:v){
        sum+=i;
    }
    cout<<"Optimal Merge Pattern is : "<<sum<<endl;
    return 0;
}