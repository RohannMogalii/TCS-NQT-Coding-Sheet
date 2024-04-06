/*
Example 1:
Input: str1 = "takeuforward"
       str2 = “forward”
Output: 5
Explanation: "Forward" is present in the 5th index in "takeuforward"

Example 2:
Input: str1 = “hello”
       str2 = “az”
Output: -1
Explanation: "az" is not a substring of "hello"

*/

// ------------------------------------------------------------------------------

// Method 1
// Using find() function
// TC: O(n);
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findIndex(string& str1,string& str2){
    auto indx = str1.find(str2);
    
    if(indx >=0 && indx<=str1.length()){
        cout<<indx;
    }else{
        cout<<-1;
    }
}
int main(){
    string str1 = "Rohan";
    string str2 = "an";
    findIndex(str1,str2);
    return 0;
}