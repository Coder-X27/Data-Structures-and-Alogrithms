#include<iostream>
using namespace std;

bool isPowerOf(int n){
    return (n&&(n& n-1));
}

int main(){

    cout<<isPowerOf(2)<<endl;
    return 0;
}