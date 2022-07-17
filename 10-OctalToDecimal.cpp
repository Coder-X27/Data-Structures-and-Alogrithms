#include <iostream>
#include <math.h>
using namespace std;

int octalToDecimal(int num)
{
    int counter = 0, x, r, sum = 0;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum += x * pow(8, counter);
        counter++;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a binary number to convert it into decimal format." << endl;
    cin >> num;
    int ans = octalToDecimal(num);
    cout << "The Decimal Value of " << num << " is " << ans << endl;
    return 0;
}