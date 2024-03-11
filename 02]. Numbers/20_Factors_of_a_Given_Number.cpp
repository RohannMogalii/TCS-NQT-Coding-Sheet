/*
Problem Statement: Find all factors of a number or find all distinct divisors of a natural number.

Example 1:
Input: n = 6
Output: 1,2,3,6
Explanation: 6 is divisible by 1,2,3,6

Example 2:
Input: n = 9
Output: 1,3,9
Explanation: 9 is divisible by 1,3,9


*/

// ----------------------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findFactors(int n){

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    
    findFactors(n);
  
    return 0;
}

// ----------------------------------------------------------------------------------------

// Method 2                      [  Optimal Approach  ]
// Looping from 1 to sqrt(n)
// TC: O(sqrt(n))
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findFactors(int n){

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i == i){
                cout<<" "<<i;
            }
            else{
                cout<<" "<<i<<" "<<n/i;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    
    findFactors(n);
  
    return 0;
}