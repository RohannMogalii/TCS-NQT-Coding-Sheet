/*

Example 1:
Input: s=”this is an amazing program”
Output: “program amazing an is this”

Example 2:
Input: s=”This is decent”
Output: “decent is This”

*/

// ----------------------------------------------

// Method 1
// Using stack
TC: 
SC:

#include<bits/stdc++.h>
using namespace std;

void reverseWords(string& str){
    int n = str.length();
    string ans = "";
    stack<string> st;
    
    for(int i=0;i<n;i++){
        if(str[i] == ' '){
            st.push(ans);
            ans="";
        }else{
            ans +=str[i];
        }
    }
    st.push(ans);
    
    string reversedWord = "";
    while(st.size()!=1){
        reversedWord+=st.top()+" ";
        st.pop();
    }
    reversedWord+=st.top();
    
    cout<<reversedWord;
}
int main(){
    string str = "this is an amazing program";
    reverseWords(str);
    return 0;
}
