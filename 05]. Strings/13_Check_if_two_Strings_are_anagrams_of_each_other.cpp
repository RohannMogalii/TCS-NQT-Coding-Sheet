/*

Example 1:
Input: CAT, ACT
Output: true
Explanation: Since the count of every letter of both strings are equal.

Example 2:
Input: RULES, LESRT 
Output: false
Explanation: Since the count of U and T  is not equal in both strings.

*/

// ---------------------------------------------------------------------------

// Method 1
// Sorting both the strings and compare each char one by one
// TC: O(nlogn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string& str1,string& str2){
    int n = str1.length();
    int m = str2.length();
    if(n!=m){
        return false;
    }
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
    
}

int main(){
    string str1,str2;
    str1 = "cat";
    str2 = "act";
    
    int n = str1.length();
    int m = str2.length();
   
    if(checkAnagram(str1,str2)){
        cout<<"Anagram"<<endl;
    }else{
        cout<<"Not Anagram"<<endl;
    }
    
    return 0;
}

// -------------------------------------------------------------------------

// Method 2
// Using frequency array
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string& str1,string& str2){
    int n = str1.length();
    int m = str2.length();
    
    if(n!=m){
        return false;
    }
    
    int freq[52]={0};
    
    for(int i=0;i<n;i++){
        if('a'<=str1[i] && 'z'>=str1[i]){
            freq[str1[i] - 'a']++;
        }else if('A'<=str1[i] && 'Z'>=str1[i]){
            freq[str1[i] - 'A' +26]++;
        }
    }
    
    for(int i=0;i<m;i++){
        if('a'<=str2[i] && 'z'>=str2[i]){
            freq[str2[i] - 'a']--;
        }else if('A'<=str2[i] && 'Z'>=str2[i]){
            freq[str2[i] - 'A' +26]--;
        }
    }
    
    for(int i=0;i<52;i++){
        if(freq[i] != 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    string str1,str2;
    str1 = "RULES";
    str2 = "LESRT";
    
    int n = str1.length();
    int m = str2.length();
   
    if(checkAnagram(str1,str2)){
        cout<<"Anagram"<<endl;
    }else{
        cout<<"Not Anagram"<<endl;
    }
    
    return 0;
}