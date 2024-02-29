/*

Examples:
Input: 2 10
Output: 2 3 5 7 
Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.

Example 2:
Input: 10 16
Output: 11 13 
Explanation: Prime Numbers b/w 10 and 16 are 11 and 13.

*/

// ----------------------------------------------------------------------------------


// Method 1                                  [  Optimal Approach  ]
// TC: O(n2)     for using two nested loops
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    
    if(N<2){
        return false;
    }
    
    for(int i=2;i<=sqrt(N);i++){
        if(N%i == 0){
            return false;
        }
    }
   return true;
}
void printPrimesbtwRange(int a,int b){

    for(int i=a;i<=b;i++){
        
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int min;
    cin>>min;
    int max;
    cin>>max;

    printPrimesbtwRange(min,max);
    
    return 0;
}