#include<iostream>
using namespace std;

int main(){

    int n,k;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the value of search key "<<endl;
    cin>>k;
    int low=0,high=n-1;
//     Sorting the array first 
    for(int i=1; i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
// CHECKING WHETHER A NUMBER IS GREATER THAN THEN KEY OR LESS THAN THE KEY AND IF IT IS EQUAL TO THE KEY THEN WE RETURN THE KEY WITH THE INDEXES .
    while(low<high){
        if((arr[low]+arr[high])==k){
            cout<<low+1<<" and "<<high+1<<" are the indexes of the sum";
            return 0;
        }
        if((arr[low]+arr[high])<k){
            low++;
        }
        if((arr[low]+arr[high])>k){
            high--;
        }
    }
    return 0;
}