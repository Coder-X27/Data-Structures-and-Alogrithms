#include<iostream>
using namespace std;

int IEP(int n,int a,int b){
    int s1=n/a;
    int s2=n/b;
    int s3=n/(a*b);
    return s1+s2-s3;
}

int main(){

    int n,a,b,c1,c2,c3;
cin>>n>>a>>b;
cout<<IEP(n,a,b);

    return 0;
}