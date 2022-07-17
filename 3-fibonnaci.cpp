#include<iostream>
using namespace std;

void fib(int num){
    int temp,first=0,second=1;
    cout<<first<<endl<<second<<endl;
    for(int i=2; i<num; i++){
        temp=first+second;
        cout<<temp<<endl;
        first=second;
        second=temp;
    }
}

int main(){

    int n;
    cin>>n;
    fib(n);
    return 0;
}