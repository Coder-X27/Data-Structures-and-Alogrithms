#include<iostream>
#include<climits>
using namespace std;
// 1ST APPROACH
// TIME COMPLEXITY N^3

// int main(){

//     int n;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxSum=INT_MIN;
//     for(int i = 0; i < n; i++){
//         for(int j = i; j < n; j++){
//             int sum=0;
//             for(int k = i; k <=j; k++){
//                 sum+=arr[k];
//             }
//             maxSum=max(maxSum,sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

// 2ND APPROACH-Cummulative Sum Method
// TIME COMPLEXITY N^2

// int main(){

//     int n;
//     cout << "Enter the size of the array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int currsum[n+1];
//     currsum[0]=0;
//     for(int i = 1; i <= n; i++){
//         currsum[i]=currsum[i-1]+arr[i-1];
//     }
//     int maxSum=INT_MIN;
//     for(int i = 1; i <= n; i++){
//         int sum=0;
//         for(int j = 0; j < i; j++){
//             sum=currsum[i]-currsum[j];
//             maxSum=max(maxSum,sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

// 3RD APPROACH TIME COMPLEXITY O(N)
// KADANE'S APPROACH

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
    int maxSum=INT_MIN;
    int currsum=0;
    for(int i = 0; i < n; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;  
        }
        maxSum=max(maxSum,currsum);
    }
    cout<<maxSum<<endl;
    return 0;
}