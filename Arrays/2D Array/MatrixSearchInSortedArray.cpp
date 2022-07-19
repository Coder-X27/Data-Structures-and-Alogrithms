#include<iostream>
using namespace std;

int main(){

    int row,column;
    cout<<"Enter the number of rows and columns:-> "<<endl;
    cin>>row>>column;
    cout<<"Enter the Elements:-> "<<endl;
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter the number you want to search in this matrix."<<endl;
    cin>>key;
    int nr=0,nc=column-1;
    int isTrue=0;
    while((nr<row||nr>=0) && (nc<column && nc>=0)){
        if(arr[nr][nc]==key){
            isTrue=1;
            break;
        }
        if(arr[nr][nc]<key){
            nr++;
        }
        if(arr[nr][nc]>key){
            nc--;
        }
    }
    if(isTrue==1){
        cout<<"Number is present in the matrix.";
    }
    else{
        cout<<"Number is not present in the matrix.";
    }
    return 0;
}