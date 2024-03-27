/*
Example 1:
Input: “a+((b-c)+d)”
Output: “a+b-c+d”
Explanation: Removed all the brackets in the algebric expression.

Example 2:
Input: “(((a-b))+c)”
Output: “a-b+c”
Explanation: Removed all the brackets in the algebric expression.

*/

// ---------------------------------------------------------------------------

// Method 1
// Using an extra string to store character without brackets
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;
void removeBrackets(string& str,int n){
    string ans;
    for(int i=0;i<n;i++){
        if(str[i]!='(' && str[i]!=')'){
            ans.push_back(str[i]);
        }
    }
    
    cout<<ans;
}
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    
    removeBrackets(str,n);
    
    return 0;
}