/*
Example 1:
Input: str = “Take you forward” 
Output: Takeyouforward
Explanation: After removing all the whitespaces Takeyouforward is the result

Example 2:
Input: str = “How are you doing”
Output: Howareyoudoing
Explanation: After removing all the whitespaces Howareyoudoing is the result

*/

// -------------------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void removeSpaces(string& str,int n){
   
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            str = str.substr(0,i)+str.substr(i+1);
        }
    }
    
    cout<<str;
}
int main(){
    string str = "How are you doing";
    int n = str.length();
    
    removeSpaces(str,n);
    
    return 0;
}

// -------------------------------------------------------------------------

// Method 2
// Using a extra string
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void removeSpaces(string& str,int n){
    string ans;
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            ans.push_back(str[i]);
        }
    }
    
    cout<<ans;
}
int main(){
    string str = "How are you doing";
    int n = str.length();
    
    removeSpaces(str,n);
    
    return 0;
}