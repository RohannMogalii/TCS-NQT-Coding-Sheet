/*

Example 1: 

Input: arr[1,1,2,2,2,3,3]

Output: arr[1,2,3,_,_,_,_]

Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

Example 2: 

Input: arr[1,1,1,2,2,3,3,3,3,4,4]

Output: arr[1,2,3,4,_,_,_,_,_,_,_]

Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

*/

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Method 1                           [  Optimal Approach  ]
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr,int n){
   int i=0;
   for(int j=1;j<n;j++){
       if(arr[i]==arr[j]){
           continue;
       }else if(arr[i]!=arr[j]){
           arr[i+1]=arr[j];
           i++;
       }
   }
   
      cout<<i+1<<endl;
   
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

// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Method 2
// Using SET to store unique elements
// TC: o(n*log(n)) + O(n);
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &arr,int n){
   set<int> set;
   for(int i=0;i<n;i++){
       set.insert(arr[i]);
   }
   int k=set.size();
   
   int j=0;
   for(auto i:set){
       arr[j++]=i;
   }
   cout<<k;
   
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
