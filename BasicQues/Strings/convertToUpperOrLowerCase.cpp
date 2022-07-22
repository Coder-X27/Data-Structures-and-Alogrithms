#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    // 1ST METHOD :-> Using simple loop to convert lower case to upper case and upper case to lower case
    // for(int i=0; i<s.size(); i++){
    //     if(s[i] >= 'a' && s[i] <= 'z'){
    //         s[i] -= 32;
    //     }
    //     else if(s[i] >= 'A' && s[i] <= 'Z'){
    //         s[i] += 32;
    //     }
    // }

    // 2ND METHOD:->Using Transform method from ALGORITHM Header file
    transform(s.begin(), s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(),s.begin(),::tolower);
    cout<<s;
    return 0;
}