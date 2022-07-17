#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, x, newnum = 0;
    cout << "Enter the number \n";
    cin >> num;
    int copynum=num;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        newnum += x * x * x;
    }
    if (newnum == copynum)
    {
        cout << "This is a Armstrong number.\n";
    }
    else
    {
        cout << "This is not a Armstrong number.\n";
    }
    return 0;
}