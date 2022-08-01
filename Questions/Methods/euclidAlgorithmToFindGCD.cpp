#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int maxNum=max(a,b);
    int minNum=min(a,b);
    while(maxNum%minNum>0){
        int value=maxNum%minNum;
        maxNum=minNum;
        minNum=value;
    }
    cout<<minNum<<"\n";
    return 0;
}