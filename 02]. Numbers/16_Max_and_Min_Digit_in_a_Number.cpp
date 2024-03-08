/*

Problem Statement: Given a number N, print the smallest and largest digits present in the number.

Example 1:
Input: N = 2746
Output: Largest digit: 7
        Smallest digit: 2
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.

Example 2:
Input: N = 23004
Output: Largest digit : 4
        Smallest digit : 0
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.

*/

// ------------------------------------------------------------------------------------------------------------

// Method 1
// TC: O(logn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void MinMax(int digit){
   
    int mini=INT_MAX;
    int maxi=INT_MIN;
    while(digit){
        int rem=digit%10;
        maxi=max(rem,maxi);
        mini=min(rem,mini);
        digit=digit/10;
    }
    
    cout<<"Largest digit: "<<maxi<<endl;
    cout<<"Smallest digit: "<<mini;
   
}
int main(){
    int digit;
    cin>>digit;
    
    MinMax(digit);
    
    return 0;
}