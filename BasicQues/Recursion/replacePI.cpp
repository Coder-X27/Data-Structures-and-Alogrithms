#include<iostream>
using namespace std;
void replaceStr(string str){
    if(str.length()==0){
        return ;
    }
    if(str[0]=='p'&& str[1]=='i'){
        cout<<"3.14";
        replaceStr(str.substr(2));
    }
    else{
        cout<<str[0];
        replaceStr(str.substr(1));
    }
}

int main(){

    string str;
    cin>>str;
    replaceStr(str);
    return 0;
}