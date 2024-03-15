/*

Example 1:
Input: N = 472
Output: 13
Explanation: The digits in the number are 4,7 and 2. Summing them up gives us a value of 13

Example 2:
Input: N = 102
Output: 3
Explanation: The digits in the number are 0, 1, and 2. Summing them up gives us a value of 3

*/

// ------------------------------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void getSum(int n){
    
    int sum=0;
    
    while(n){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    
    cout<<sum;
}

int main(){
    int n;
    cin>>n;
    
    getSum(n);
    
    return 0;
}