/*

Example 1:
Input: String str1 = “abcdef”
       String str2 = “cefz”
Output: abd
Explanation: The common characters in both strings are c, e, f.
So after removing these characters from string 1 we get string resulting string as abd.


Example 2:
Input: String str1 = “xyzpw”
       String str2 = “lmno”
Output: xyzpw
Explanation: As there is no common character in both the strings, string 1 remains unchanged.

*/

// ---------------------------------------------------------------------------------------------------------

// Method 1
// Using hashmap
// But here the output is not in correct order as given output
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void solve(string& str1,string& str2){
    int n = str1.length();
    int m = str2.length();

    unordered_map<char,int> mp;
    
    for(int i=0;i<n;i++){
        mp[str1[i]]++;
    }
    
    for(int i=0;i<m;i++){
        mp[str2[i]]--;
    }
    
    for(auto i:mp){
        if(i.second>0){
            cout<<i.first;
        }
    }
    
}
int main(){
    string str1 = "xyzpw";
    string str2 = "lmno";
    
    solve(str1,str2);
    
    return 0;
}

// ----------------------------------------------------------------------------------------

// Method 2
// Using hashmap
// But here the output is in correct order as given output
// TC: O(N)
// SC: O(N)

#include<bits/stdc++.h>
using namespace std;

void solve(string& str1,string& str2){
    int n = str1.length();
    int m = str2.length();

    unordered_map<char,int> mp;
    string ans ="";
    
    for(int i=0;i<m;i++){
        mp[str2[i]] = 1;
    }
    
    for(int i=0;i<n;i++){
        if(!mp[str1[i]]){
            ans.push_back(str1[i]);
        }
    }
    
    cout<<ans;
    
}
int main(){
    string str1 = "abcdef";
    string str2 = "cefz";
    
    solve(str1,str2);
    
    return 0;
}