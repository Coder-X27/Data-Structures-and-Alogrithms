#include<iostream>
using namespace std;

int kadane(int arr[],int n){
    int maxSum=INT_MIN;
    int currsum=0;
    for(int i = 0; i < n; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;  
        }
        maxSum=max(maxSum,currsum);
    }
    return maxSum;
}

int main(){

    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nowrapsum=kadane(arr,n);

    int totalsum=0;
    for(int i = 0; i < n; i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrapsum=totalsum+kadane(arr,n);
    cout<<max(wrapsum,nowrapsum);
    return 0;
}