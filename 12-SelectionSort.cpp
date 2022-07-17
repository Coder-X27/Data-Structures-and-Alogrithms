#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int arr[] = {8, 2, 1, 5, 9, 3};
    for (int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 6; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}