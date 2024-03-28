/*

Example 1:
Input: takeuforward
Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1 
Explanation: Count of every character of string is printed.

Example 2:
Input: articles
Output: a1 c1 e1 i1 l1 r1 s1 t1 
Explanation: Count of every character of string is printed.

*/

// -----------------------------------------------------------------------

// Method 1
// Using hashmap
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void calcFrequency(string& str,int n){
   map<char,int> mp;
   for(int i=0;i<n;i++){
       mp[str[i]]++;
   }
   
   for(auto i : mp){
       cout<<i.first<<i.second<<" "; 
   }
}
int main(){
    string str = "Rohan Mogali";
    int n = str.length();
    
    calcFrequency(str,n);
    
    return 0;
}

// -----------------------------------------------------------------------

// Method 2
// Sort the string and print the consecutive elements count.
// TC: O(nlogn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void calcFrequency(string& str,int n){
   sort(str.begin(),str.end());
   
   char ch = str[0];
   int count=1;
   
   for(int i=1;i<n;i++){
       if(str[i] == ch){
           count++;
       }else{
           cout<<ch<<count<<" ";
           count=1;
           ch=str[i];
       }
   }
   cout<<ch<<count<<" ";
}
int main(){
    string str = "Rohan Mogali";
    int n = str.length();
    
    calcFrequency(str,n);
    
    return 0;
}

// ------------------------------------------------------------------------

// Method 3
// Using Frequency array
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void calcFrequency(string& str,int n){

   int freq[26] = {0};
   
   for(int i=0;i<n;i++){
    freq[str[i] - 'a']++;    
   }
   
   for(int i=0;i<26;i++){
       if(freq[i]!=0){
           cout<<(char)(i+'a')<<freq[i]<<" ";
       }
   }
}
int main(){
    string str = "rohan mogali";
    int n = str.length();
    
    calcFrequency(str,n);
    
    return 0;
}

// -------------------------------------------------------------------------

// Method 4
// using frequency array for both lowecase and uppercase letters
// Tc: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void calcFrequency(string& str,int n){

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
            cout<<(char)(i+'a')<<freq[i]<<" ";
           }else{
             cout<<(char)(i+'A'-26)<<freq[i]<<" ";
           }
       }
   }
}
int main(){
    string str = "Rohan5 Mogali";
    int n = str.length();
    
    calcFrequency(str,n);
    
    return 0;
}
