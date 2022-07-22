#include <iostream>
using namespace std;

int printNum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    cout << n << " ";
    return printNum(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << printNum(n);
    return 0;
}