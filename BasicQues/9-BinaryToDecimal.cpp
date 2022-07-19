#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int num)
{
    int counter = 0, x, r, sum = 0;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum += x * pow(2, counter);
        counter++;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a binary number to convert it into decimal format." << endl;
    cin >> num;
    int ans = binaryToDecimal(num);
    cout << "The Decimal Value of " << num << " is " << ans << endl;
    return 0;
}