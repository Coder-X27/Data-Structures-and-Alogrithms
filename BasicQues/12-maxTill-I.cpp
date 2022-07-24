#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the size of the array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<"The elements of array are:-> ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
int maxElement=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
        cout<<maxElement<<" ";
    }   
    return 0;
}