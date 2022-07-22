#include<iostream>
using namespace std;
void printStr(string str){
    if(str.length()==0){
        return ;
    }
    string ros=str.substr(1);
    printStr(ros);
    cout<<str[0];
}

int main(){

    string str;
    cin>>str;
    printStr(str);
    return 0;
}