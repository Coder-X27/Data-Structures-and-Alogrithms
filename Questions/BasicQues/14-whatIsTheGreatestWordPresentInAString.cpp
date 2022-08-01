#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0, currLength = 0, maxLength = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLength > maxLength)
            {
                maxLength = currLength;
            }
            currLength=0;
        }
        else
            currLength++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<maxLength<<"\n";
    return 0;
}