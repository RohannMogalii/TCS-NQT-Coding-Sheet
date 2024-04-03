/*

Example 1:
Input: string s=”Google Doc”
Output: “Google”

Explanation: Google is the largest word in the given string.

Example 2:
Input: string s=”Microsoft Teams”
Output: “Microsoft”
Explanation: Microsoft is the largest word in the given string

*/

// -------------------------------------------------------------------------

// Method 1
// TC: O(n)+O(n) = O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void MaxLengthWords(string& str){
    int n = str.length();
    int i=0,j=0;
    
    int max_length = 0;
    int max_start=0;
    
    while(j<=n){
        if(j<n && str[j]!=' '){
            j++;
        }else{
            int curr_length = j-i;
            if(curr_length>max_length){
                max_length = curr_length;
                max_start = i;
            }
            j++;
            i=j;
        }
    }
    
    cout<<str.substr(max_start,max_length);
}
int main(){
    string str = "Rohan Mogali";
    MaxLengthWords(str);
    
    return 0;
}