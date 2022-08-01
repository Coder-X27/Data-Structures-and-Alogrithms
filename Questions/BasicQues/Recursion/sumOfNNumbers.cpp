#include<iostream>
using namespace std;

int sum1(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n + sum1(n-1));
    }
}

int main(){

    int n;
    cin>>n;
    cout<<sum1(n);
    return 0;
}