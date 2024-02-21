/*

Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

Example 2:
Input: (1,5),(2,3),(4,2),(5,1),(2,4)
Output: (2,4) (5,1)
Explanation: Since (1,5) and (2,4) are symmetric pairs and (5,1) and (4,2) are symmetric pairs.


*/

// Method 1
// Using two Loops
// One loop for traversing the pair and
// second loop for finding the symmetric pairs

// TC: O(n*n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
   int arr[n][2] = {{1,2},{2,1},{3,4},{4,5},{5,4}};
    
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]){
            cout<<"("<<arr[i][1]<<","<<arr[i][0]<<")"<<" ";
            break;
          }
        }
    }
    
    return 0;
}


// --------------------------------------------------------------------------------------------------------------


// Method 2             (OPTIMAL approach)
// Using Hashmap
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n][2] = {{1,2},{2,1},{3,4},{4,5},{5,4}};
    
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++){
        int first= arr[i][0];
        int second = arr[i][1];
        
        if(mp.find(second)!=mp.end() && mp[second]==first){
            cout<<'('<<first<<","<<second<<")"<<" ";
        }else{
            mp[first]=second;
        }
    }
    
    return 0;
}

