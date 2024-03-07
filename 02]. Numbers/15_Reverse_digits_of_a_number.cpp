/*

Problem Statement: Given an integer. Write a program to reverse digits of a number.

Example 1:
Input: N = 472
Output: 274
Explanation: Reading the number from back to front, we see that the output should be 274

Example 2:
Input: N = 470
Output: 74
Explanation: Reading the number from back to front, we get 074. For an integer with 
no decimals, we know that leading zeros have no significance and therefore our answer should be 74


*/

// ----------------------------------------------------------------------------------------------------------------

// Method 1
// TC: O(logn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void reverseDigit(int digit){
   
    int rev=0;
    int temp=digit;
    while(digit){
        int rem=digit%10;
        rev=(rev*10)+rem;
        digit=digit/10;
    }
    
    cout<<rev;
   
}
int main(){
    int digit;
    cin>>digit;
    
    reverseDigit(digit);
    
    return 0;
}