#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The sum of the subArrays are:->\n";
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            cout << sum << endl;
        }
        cout << endl;
    }
    return 0;
}