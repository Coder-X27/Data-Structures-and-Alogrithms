
// Permutation
// To print all the permutations of a string.
// Idea: for each character s[i] in the given string, we add a character in the ans
// string and then solve s.substr(0,i) + s.substr(i+1)
// Sample Input:
// ABC
// Sample Output:
// ABC
// ACB
// BAC
// BCA
// CAB
// CBA
// Time Complexity: O(N*2
// n
// )
// Space Complexity: O(2
// n
// )

#include<iostream>
using namespace std;

void permutStr(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i]; 
        string ros=s.substr(0,i)+s.substr(i+1);
        permutStr(ros,ans+ch);
    }

}

int main(){

    permutStr("ABC","");
    return 0;
}