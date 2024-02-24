/*

Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.

*/

// ---------------------------------------------------------------------------------------

// Method 1                     [  Optimal Approach  ]
// Using map
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void findRepeatingElements(int arr[],int n){
    map<int,int> mp;
   
   for(int i=0;i<n;i++){
       mp[arr[i]]++;
   }
   
   for(auto i:mp){
       if(i.second>1){
            cout<<i.first<<" ";
       }
   }
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    findRepeatingElements(arr,n);
 
    return 0;
}
