#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{

    int n, fac, r;
    cin >> n >> r;
    fac = factorial(n) / (factorial(r) * factorial(n - r));
    cout << fac;
    return 0;
}