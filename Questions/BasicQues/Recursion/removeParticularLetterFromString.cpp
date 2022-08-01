#include<iostream>
using namespace std;

string removeAlphabet(string str,char letter){
    if(str.length() == 0) {
        return "";
    }
    char ch=str[0];
    string ans=removeAlphabet(str.substr(1),letter);
    if(ch==letter) {
        return ans+ch;
    }
    return ch+ans;
}


int main(){
    string str;
    char letter;
    cout<<"Enter the string\n";
    cin>>str;
    cout<<"Enter the letter you wanted to remove\n";
    cin>>letter;
    cout<<removeAlphabet(str,letter);
    return 0;
}