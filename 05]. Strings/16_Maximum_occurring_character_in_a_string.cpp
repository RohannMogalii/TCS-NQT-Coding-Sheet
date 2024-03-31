/*
Example 1:
Input: str = “takeuforward”
Output: a
Explanation: The character 'a' and 'r’ have the same  maximum occurrence i.e 2. Hence we can print any one of them

Example 2:
Input: str = “apple”
Output: p
Explanation: The character 'p' have the maximum occurrence i.e 2

*/

// --------------------------------------------------------------------------------------------------------------------------------

// Method 1
// Using map
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<char,int>&a, const pair<char,int>&b){
    return a.second<b.second;
}
void maxOccurringChar(string& str,int n){
    unordered_map<char,int> mp;

    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    
   auto maxi = *max_element(mp.begin(),mp.end(),cmp);
   
   cout<<maxi.first;
}
int main(){
    string str = "Rohan Mogali";
    int n = str.length();
    
    maxOccurringChar(str,n);
    
    return 0;
}