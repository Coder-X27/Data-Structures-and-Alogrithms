// CountPaths
// Find the number of ways to reach e from s.
// Idea:
// We have 6 ways to go forward (1,2,3,4,5,6).
// At the starting point s,
// Current answer = countPath(s+1,e) + countPath(s+2,e) + countPath(s+3,e) +
// countPath(s+4,e) + countPath(s+5,e) + countPath(s+6,e)
// Time Complexity: O(2
// n
// )
// Space Complexity: O(2
// n
// )

#include<iostream>
using namespace std;

int leastSteps(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i=1;i<6;i++){
        count+=leastSteps(s+i,e);
    }
    return count;
    
}

int main(){

    cout<<leastSteps(0,3);
    return 0;
}