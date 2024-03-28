/*

Example 1:
Input: String str = "take u forward is awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: We get the result after capitalizing the first and last character of each word of a string

Example 2:
Input: String str = "Take u Forward is Awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: Characters T, F, A are initially in uppercase , so they remain as they are in the result.

*/

// -----------------------------------------------------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
void Capitalize(string& str,int n){
   for(int i=0;i<n;i++){
       if(i==0 || i==(n-1)){
           str[i] = towupper(str[i]);
       }else if(str[i] == ' '){
           str[i-1] = towupper(str[i-1]);
           str[i+1] = towupper(str[i+1]);
       }
   }
   
   cout<<str;
}
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    
    Capitalize(str,n);
    
    return 0;
}