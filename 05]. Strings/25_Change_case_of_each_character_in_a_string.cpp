/*

Example 1:
Input: String str = “javA”
Output: JAVa
Explanation:
 Changed the lower case characters to uppercase and vice versa.

Example 2:
Input: String str = “take u forward IS Awesome”
Output: TAKE U FORWARD is aWESOME
Explanation: Changed the lower case characters to uppercase and vice versa.

*/

// ----------------------------------------------------------------------------------

// Method 1
// Using inbuilt functions like tolower(),toupper(),islower(),isupper()
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void solve(string& str){
    int n = str.length();
    
    for(int i=0;i<n;i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }else if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else if(str[i] == ' '){
            continue;
        }
    }
    cout<<str;
}
int main(){
    string str = "javA";
    solve(str);
    return 0;
}