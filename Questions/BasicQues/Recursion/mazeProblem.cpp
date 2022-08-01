#include<iostream>
using namespace std;

int pathCounter(int n,int i,int j){
    if(i==n-1&&j==n-1){
        return 1;
    }
    if(i>=n||j>=n){
        return 0;
    }
    return pathCounter(n,i+1,j)+pathCounter(n,i,j+1);
}

int main(){
cout<<pathCounter(10,0,0)<<endl;
    return 0;
}