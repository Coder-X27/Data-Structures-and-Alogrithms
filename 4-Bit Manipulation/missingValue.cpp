#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum=xorSum^arr[i];
    }
    return xorSum;
}

int main(){
    int arr[]={2,3,1,4,2,1,4};
    cout<<unique(arr,7);
    return 0;
}