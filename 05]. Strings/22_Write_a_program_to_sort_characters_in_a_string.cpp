/*
Example 1:
Input: String str = “zxcbg”
Output: bcgxz
Explanation: After sorting we get string as bcgxz

Example 2:
Input: String str = “edcba”
Output: abcde
Explanation: After sorting we get string as abcde

*/
// --------------------------------------------------------------

// Method 1
// Using sort function
// TC: O(nlogn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void sort(string& str){
   sort(str.begin(),str.end());
   cout<<str;
}
int main(){
    string str = "edcba";
    sort(str);
    
    return 0;
}