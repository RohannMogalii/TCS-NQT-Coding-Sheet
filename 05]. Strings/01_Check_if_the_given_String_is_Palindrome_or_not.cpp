/*

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.

*/

// -------------------------------------------------------------------------------

// Method 1
// By swapping first and last and first++ ,last--
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& str){
    string ans = str;
    int n=str.length();
    
    int p1=0;
    int p2=n-1;
    while(p1<p2){
        char temp = str[p1];
        str[p1] = str[p2];
        str[p2] = temp;
        p1++;p2--;
    }
    
    if(ans == str)
        return true;
    else
        return false;
    
}
int main(){
    string str;
    getline(cin,str);
 
    if(isPalindrome(str)){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    
    return 0;
}
