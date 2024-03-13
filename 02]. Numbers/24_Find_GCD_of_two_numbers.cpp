/*

Example 1:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.

Example 2:
Input: num1 = 3, num2 = 6
Output: 3
Explanation: Since 3 is the greatest number which divides both num1 and num2.

*/

// ---------------------------------------------------------------------------------------

// Method 1                               [  Optimal Approach  ]
// looping from 1 to min(a,b)
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findGCD(int a,int b){
    int ans;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    cout<<ans;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
   
    findGCD(a,b);
    
    return 0;
}   