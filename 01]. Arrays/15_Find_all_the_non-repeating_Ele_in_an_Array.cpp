
/*

Example 1:
Input:
    Nums = [1,2,-1,1,3,1]
Output:
    2,-1,3
Explanation:
    1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.

Example 2:
Input:
    Nums = [1,2,3]
Output:
    1,2,3
Explanation:
    All elements present in the array occur once. Hence, every element is non-repeating.

*/

// ------------------------------------------------------------------------------

// Method 1                  [  Optimal Approach  ]
// Using maps
// TC: O(n)
// SC: O(n)


#include<bits/stdc++.h>
using namespace std;

void findNonRepeating(int arr[],int n){
    map<int,int> mp;
   
   for(int i=0;i<n;i++){
       mp[arr[i]]++;
   }
   
   for(auto i:mp){
       if(i.second==1){
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
 
    findNonRepeating(arr,n);
 
    return 0;
}
