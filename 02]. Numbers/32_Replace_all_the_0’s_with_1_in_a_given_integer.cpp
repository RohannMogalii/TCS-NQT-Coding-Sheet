/*

Example 1:
Input: N = 102003
Output: 112113
Explanation: The 2nd,4th and 5th position from left contain 0.The resultant integer has replaced the 0’s in those  positions with 1.

Example 2:
Input:  204
Output: 214
Explanation: The 2nd position from left contain 0. The resultant integer has replaced the 0 in that position with 1.

*/

// -----------------------------------------------------------------------------------------------------------------------------------------------

// Method 1                           [  Brute Force approach  ]
// TC: O(n2)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void replaceZerosWithOnes(int n){
   int number=0;
   while(n){
       int rem=n%10;
       if(rem==0){
           rem=1;
       }
       number = (number*10) + rem;
       n=n/10;
   }
   
   int ans=0;
   while(number){
       int rem=number%10;
       ans = (ans*10) + rem;
       number=number/10;
   }
   
   cout<<ans;
}
int main(){
    int n;
    cin>>n;
    
    replaceZerosWithOnes(n);
    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------------------------------

// Method 2                      [  Optimal Approach  ]
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void replaceZerosWithOnes(int n){
   int number=0,temp=1;
   while(n>0){
       int rem=n%10;
       if(rem==0){
           rem=1;
       }
       number = (rem*temp) + number;
       n=n/10;
       temp=temp*10;
   }

   cout<<number;
}
int main(){
    int n;
    cin>>n;
    
    replaceZerosWithOnes(n);
    return 0;
}