/*

Problem Statement: Given a number, check if it is automorphic or not. 
A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.

Example 1:
Input Format: N = 76
Result: Automorphic Number
Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.

Input Format: 25
Result: Automorphic Number
Explanation: Calculating 25 * 25 gives 625, it ends with the given number.

*/

// ------------------------------------------------------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n){
    
    int sq = n*n;
    
    while(n>0){
        if(n%10 != sq%10){
            return false;
        }
        n=n/10;
        sq=sq/10;
    }
    
    return true;
}

int main(){
    int n;
    cin>>n;
   
    if(isAutomorphic(n)){
        cout<<"Automorphic Number";
    }else{
        cout<<"Not Automorphic Number";
    }
    
    return 0;
}