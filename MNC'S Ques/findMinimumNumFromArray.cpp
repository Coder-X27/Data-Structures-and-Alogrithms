// Problem
// Find the smallest positive missing number in the given array.
// Example: [0, -10, 1, 3, -20], Ans = 2
// Intuition
// If in O(1), we can tell if an element is present in an array, then our task will be
// simpler.
// For that, we will maintain a Check[ ] array, that will if an element x is present in
// the array or not.
// It will be of boolean type as we only need to check the presence or absence of the
// number.

// Steps to Solve:
// 1. Build the Check[ ] array initialized with False at all indices.
// 2. By iterating over the array and marking non-negative a[i] as true i.e.

// if(a[i] >= 0)
// check[a[i]] = True

// 3. Iterate in the Check[ ] from i=1, BREAK the loop when you find check[i] =
// False and store that i in the ans variable.
// 4. Output the ans.

// Example:
// Given Array: [0, -9, 1, 3, -4, 5]

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
    const int N = 100;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
        return 0;
    }
    cout << ans << endl;
    return 0;
}