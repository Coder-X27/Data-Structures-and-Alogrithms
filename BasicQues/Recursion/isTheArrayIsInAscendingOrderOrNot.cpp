#include <iostream>
using namespace std;

bool isAscending(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = isAscending(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[5] = {1, 3,2,5,6};
    if (isAscending(arr, 5))
    {
        cout <<"It is a sorted Array" << endl;
    }
    else{
        cout<<"It is not sorted!"<<endl;
    }
    return 0;
}