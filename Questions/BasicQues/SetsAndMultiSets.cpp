#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> a;
    a.insert(5);
    a.insert(6);
    a.insert(5);
    a.insert(7);
    a.insert(8);

    //Print the set from starting 

    for(auto i:a){
        cout<<i;
    }

    //Print the set in reverse order 

    // for(auto i=a.rbegin();i!=a.rend();i++){
    //     cout<<*i<<endl;
    // }
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto i:s){
        cout<<endl<<i;
    }
    // HOW TO FIND OUT THE SIZE OF THE SET 
    cout<<a.size();
    return 0;
}