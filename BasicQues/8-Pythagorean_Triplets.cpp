#include<iostream>
using namespace std;

int isTriplet(int a,int b,int c){
    if(((a*a)+(b*b))==(c*c)){
        return 1;
    }
    return -1;
}

int main(){
    int a,b,c,val;
    cout<<"Enter the three numbers to check whether it is a pythagorean triplet or not."<<endl;
    cin>>a>>b>>c;
    val=isTriplet(a,b,c);

    if(val==1){
        cout<<"It is a pythagorean triplet"<<endl;
    }
    else{
        cout<<"It is not a pythagorean triplet"<<endl;
    }
    return 0;
}