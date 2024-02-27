
/*

Example 1:
Input: min = 10 , max = 50
Output: 11 22 33 44 
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

Example2:
Input: min = 100 , max = 150
Output: 101 111 121 131 141 
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

*/


// ----------------------------------------------------------------------------------------

// Method 1            [  Optimal Approach  ]
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int N){
    int temp = N;
    int result=0;
    
    while(temp){
        int digit = temp % 10;
        result = (result * 10)+ digit;
        temp=temp/10;
    }
    
    if(result == N){
        return true;
    }else{
        return false;
    }
}
int main(){
    int min;
    cin>>min;
    int max;
    cin>>max;
    
    for(int i=min;i<=max;i++){
        if(isPalindrome(i)){
         cout<<i<<" ";
        }else{
            continue;
        }
    }
    
    return 0;
}