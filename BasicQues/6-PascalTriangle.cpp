#include <iostream>
using namespace std;
int factorial(int n)
{
    int ans=1;
    for(int i = 2; i <= n; i++){
        ans*=i;
    }
    return ans;
}
int main()
{

    int n,ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<factorial(i) / (factorial(j) * factorial(i - j))<<" ";
            // cout<<"*";
        }
        cout << endl;
    }
    return 0;
}