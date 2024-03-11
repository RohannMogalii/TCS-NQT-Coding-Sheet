/*

Example 1:
Input: N = 12
Output: 2,2,3
Explanation: These are the prime factors of 12.

Example 2:
Input: N = 36
Output: 2,2,3,3
Explanation: These are the prime factors of 36.

*/

// ----------------------------------------------------------------------------

// Method 1
// using a For loop  where i will start from 2 and go on till n-1 
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n){
    for(int i=2;n>1;i++){
        if(n%i==0){
            while(n%i==0){
                cout<<i<<", ";
                n=n/i;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    printPrimeFactors(n);
    
    return 0;
}

// ------------------------------------------------------------------------------

// Method 2
// run For Loop till Square Root of N. 
// TC: O(sqrt(n))
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n){
    for(int i=2;i<=sqrt(n),n>1;i++){
        if(n%i==0){
            while(n%i==0){
                cout<<i<<", ";
                n=n/i;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    printPrimeFactors(n);
    
    return 0;
}