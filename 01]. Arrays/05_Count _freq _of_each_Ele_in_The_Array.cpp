/*

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	    5   2
        15  1
Explanation: 10 occurs 3 times in the array
	         5 occurs 2 times in the array
             15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	    3  1
        4  2
Explanation: 2 occurs 3 times in the array
	         3 occurs 1 time in the array
             4 occurs 2 time in the array

*/

// ----------------------------------------------------------------------------------------------------------------


// Method 1                                                     [  Brute Force Approach  ]
    // Make a visited array of type boolean.
    // Use the first loop to point to an element of the array.
    // Initialize the variable count to 1.
    // Make that index true in the visited array.
    // Run second loop, if we find the element then mark the visited index true and increase the count.
    // If the visited index is already true then skip the other steps.

// TC: O(n2)
// SC : O(n);

#include<bits/stdc++.h>
using namespace std;
void countFreq(vector<int> &arr,int n){
    vector<bool> visited(n,false);
    
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    countFreq(arr,n);
    return 0;
}

// -------------------------------------------------------------------------------------------------------------

// Method 2                                      [  Optimal Approach  ]
// Using Map
// TC: O(n)
// SC: O(n)


#include<bits/stdc++.h>
using namespace std;
void countFreq(vector<int> &arr,int n){
   unordered_map<int,int> mp;
   
   for(int i=0;i<n;i++){
       mp[arr[i]]++;
   }
   
   for(auto i:mp){
       cout<<i.first<<" "<<i.second<<endl;
   }
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    countFreq(arr,n);
    return 0;
}
