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
    // TRANSPOSE LOGIC 

    int newMatrix[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            newMatrix[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<newMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}