#include <iostream>
#include<math.h>
using namespace std;

bool primeNumber(int num){
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int snum, ennum;
    cout<<"Enter the number from which you want to took out the prime numbers :-> \n";
    cin>>snum>>ennum;
    cout<<sqrt(2);
    for(int i=snum; i<ennum; i++){
        if(primeNumber(i)){
            cout<<i<<"\n";
        }
    }
    return 0;
}