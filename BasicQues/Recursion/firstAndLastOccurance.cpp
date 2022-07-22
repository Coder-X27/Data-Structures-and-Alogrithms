#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int i ,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}
int lastOcc(int arr[],int n,int i ,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastOcc(arr,n,i+1,key);

    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){

    int arr[]={0,1,4,1,5,6,8,95,125,1343,2};
    int first=firstOcc(arr,11,0,1);
    int last=lastOcc(arr,11,0,1);
    if(first==last){
        cout<<"There is only one element present in that array which is at position "<<first<<endl;
    }
    else{
        cout<<"First Position :->  "<<first<<"\nLast Position :-> "<<last<<endl;
    }
    return 0;
}