#include<iostream>
using namespace std;

int sNaturalNumbers(int n) { 
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main(){

    int n,ans;
    cin>>n;
    ans=sNaturalNumbers(n);
    cout<<ans<<endl;
    return 0;
}