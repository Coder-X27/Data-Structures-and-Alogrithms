// IT IS A METHOD TO FIND OUT THE PRIME NUMBER BY SIMPLY MARKING THE PRIME TRUE AT THE POSITIONS WHERE THE STATING NUMBER IS A DIVISOR OF THE OTHER NUMBERS AND THE REMAINING ONES ARE THE PRIME NUMBERS.IT IS A METHOD WHERE WE DONT HAVE TO RUN LOOPS TWICE OR CHECK FOR EVERY ELEMENT ITS TIME COMPLEXITY IS O(logn).//
// METHOD IS KNOWN AS SIEVE OF ERATOSTHENIS


#include <iostream>
using namespace std;

void sOE(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i=2; i <= n; i++){
        if (prime[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

    int main()
    {
        int n;
        cin >> n;
        sOE(n);
        return 0;
    }