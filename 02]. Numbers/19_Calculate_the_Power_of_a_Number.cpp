/*
Problem Statement: Find the Power of a number.

Example 1:
Input: N = 5, k=3
Output: 125
Explanation: Since 5*5*5 is 125.

Example 2:
Input: n=2 k=4
Output: 16
Explanation: Since 2*2*2*2 is 16

*/

// -----------------------------------------------------------

// Method 1
// Using pow() function
// TC: O(logn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int findPower(int n,int k){

    return pow(n,k);
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    cout<<findPower(n,k);
  
    return 0;
}