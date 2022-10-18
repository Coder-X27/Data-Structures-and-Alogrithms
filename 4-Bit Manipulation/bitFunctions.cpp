#include<iostream>
using namespace std;

// To check whether a bit is present at a particular position or not 
int getbit(int n,int val){
    return ((n &(1<<val))!=0);
}
// To set bit at a particular position 
int setBit(int n,int val){
    return ((n | (1<<val)));
}
// In clearBit if we want to clear the bit at a particular position then we can apply this method . 
int clearBit(int n,int val){
    int mask= ~(1<<val);
    return (n & mask);
}
// Update bit is when you want to update a bit at a specific position then we can apply this method 
int updateBit(int n,int val,int pos){
    n=clearBit(n,pos);
    return (n|(val<<pos));
}

int main(){
    cout<<getbit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}