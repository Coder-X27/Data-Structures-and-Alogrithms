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

    // SPIRAL_LOGIC

    int row_start=0,col_start=0,row_end=row-1,col_end=column-1;
    while((row_start<=row_end) && (col_start<=col_end)){
        for(int i=col_start;i<=col_end;i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++){{
            cout<<arr[i][col_end]<<" ";
        }}
        col_end--;
        for(int i=col_end;i>=col_start;i--){{
            cout<<arr[row_end][i]<<" ";
        }}
        row_end--;
        for(int i=row_end;i>=row_start;i--){{
            cout<<arr[i][col_start]<<" ";
        }}
        col_start++;
    }

    return 0;
}