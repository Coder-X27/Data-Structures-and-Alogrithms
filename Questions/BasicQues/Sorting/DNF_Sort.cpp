#include<iostream>
using namespace std;

void DNF(int arr[],int n){
    int low,mid;
    low=mid=0;
    int high=n-1;
    while(mid<=high){
        int temp;
        if(arr[mid]==0){
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        
        else if(arr[mid]==2){
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
}

int main(){

    int arr[]={1,1,2,0,0,1,2,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    DNF(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}