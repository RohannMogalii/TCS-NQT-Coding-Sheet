/*
Example 1:
Input: s = "bcabc"
Output: “bca"

Explanation: Duplicate Characters are removed
Example 2:
Input: s = "cbacdcbc"
Output: "cbad" 
Explanation: Duplicate Characters are removed

*/

// --------------------------------------------------------------

// Method 1
// Using hashmap
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void removeDuplicateLetters(string& str,int n){
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    
    for(auto i: mp){
        cout<<i.first;
    }
}
int main(){
    string str = "cbacdcbc";
    int n = str.length();
    
    removeDuplicateLetters(str,n);
    
    return 0;
}

// --------------------------------------------------------------------------

// Method 2
// using frequency array 
TC:
SC: 

#include<bits/stdc++.h>
using namespace std;

void removeDuplicateLetters(string& str,int n){
    int freq[52] = {0};
    
    for(int i=0;i<n;i++){
        if('a'<=str[i] && 'z'>=str[i]){
            freq[str[i] - 'a']++;
        }else if('A'<=str[i] && 'Z'>=str[i]){
            freq[str[i] - 'A' +26]++;
        }
    }
    
    for(int i=0;i<52;i++){
        if(freq[i]!=0){
            if(i<26){
                cout<<(char)(i+'a');
            }else{
                cout<<(char)(i+'A'-26);
            }
        }
    }
}
int main(){
    string str = "bcabc";
    int n = str.length();
    
    removeDuplicateLetters(str,n);
    
    return 0;
}

// -----------------------------------------------------------------------

// Method 3
// Keep a pointer i at the starting of the string. check if the character is already visited or not. if(str[i] – ‘a’) is false then add that character to ans and make it true. 

// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void removeDuplicateLetters(string& str,int n){
    string ans="";
    int freq[52] = {0};
    
    for(int i=0;i<n;i++){
        if('a'<=str[i] && 'z'>=str[i]){
            if(freq[str[i] - 'a'] == false){
            ans+=str[i];
            freq[str[i]-'a'] = true;
            }
        }
        else if('A'<=str[i] && 'Z'>=str[i]){
            if(freq[str[i] - 'A'+26] == false){
                ans+=str[i];
            freq[str[i]-'A'+26] = true;
            }
        }
    }
  
   cout<<ans;
}
int main(){
    string str = "BCABC";
    int n = str.length();
    
    removeDuplicateLetters(str,n);
    
    return 0;
}