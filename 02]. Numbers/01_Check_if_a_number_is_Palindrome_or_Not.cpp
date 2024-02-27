/*

Example 1:
Input: N = 123
Output: Not Palindrome Number
Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.

Example 2:
Input: N =  121 
Output: Palindrome Number
Explanation: 121 read backwards as 121.Since these are two same numbers 121 is a palindrome.

*/

// ---------------------------------------------------------------------------------------------------------


// Method 1         [  Optimal Approach  ]
// TC: O(logn)
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
    int N;
    cin>>N;
    
    if(isPalindrome(N)){
        cout<<"Palindrome Number"<<endl;
    }else{
        cout<<"Not Palindrome Number"<<endl;
    }
    return 0;
}
