/*

Example 1:
Input: arr[]={2,3,1,9,3,1,3,9}
Output:  {2,3,1,9}

Explanation: Removed all the duplicate elements

Example 2:
Input: arr[]={4,3,9,2,4,1,10,89,34}
Output: {3,4,9,2,1,10,34,89}
Explanation: Removed all the duplicate elements

*/

// -------------------------------------------------------------------------------------------

// Method 1
//  Using map
// TC: O(n) Reason:Iteration in array , searching hash table
// SC: O(n) Reason : Using hashing

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr,int n){
   unordered_map<int,int> mp;
   
   for(int i =0;i<n;i++){
       if(mp.find(arr[i]) == mp.end()){
           cout<<arr[i]<<" ";
           mp[arr[i]]++;
       }
   }
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    removeDuplicates(arr,n);
    
    return 0;
}