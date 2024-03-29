/*

Example 1:
Input: string = “google”
Output: l,e

Explanation: Non repeating characters are l,e.

Example 2:
Input: string = “yahoo”
Output: y,a,h
Explanation: Non repeating characters are y,a,h

*/

// ---------------------------------------------------------------

// Method 1
// Using hashmap
// TC: O(n)
// SC: O(N)

#include<bits/stdc++.h>
using namespace std;

void nonRepeating(string& str,int n){
   unordered_map<char,int> mp;
   
   for(int i=0;i<n;i++){
       if(str[i]==' '){
           continue;
       }else{
       mp[str[i]]++;
       }
   }
   
   for(auto i:mp){
       if(i.second==1){
           cout<<i.first<<" ";
       }
   }
}
int main(){
    string str = "yahoo google";
    int n = str.length();
    
    nonRepeating(str,n);
    
    return 0;
}

// --------------------------------------------------------------------

// Method 2
// Using frequency array
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void nonRepeating(string& str,int n){

   int freq[52] = {0};
   
   for(int i=0;i<n;i++){
       if('a'<=str[i] && 'z'>=str[i]){
        freq[str[i] - 'a']++;    
       }else if('A'<=str[i] && 'Z'>=str[i]){
           freq[str[i] - 'A' +26]++;
       }
   }
   
   for(int i=0;i<52;i++){
       if(freq[i] == 1){
           if(i<26){
            cout<<(char)(i+'a')<<" ";
           }else{
               cout<<(char)(i+'A'-26)<<" ";
           }
       }
   }
}
int main(){
    string str = "google yahoo";
    int n = str.length();
    
    nonRepeating(str,n);
    
    return 0;
}