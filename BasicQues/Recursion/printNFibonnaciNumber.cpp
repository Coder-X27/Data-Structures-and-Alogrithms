#include <iostream>
using namespace std;

int count;
int Fibonnacci(int n)
{
    if(n==0||n==1){
        return n;
    }
    return Fibonnacci(n-1)+ Fibonnacci(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << Fibonnacci(n);
    return 0;
}