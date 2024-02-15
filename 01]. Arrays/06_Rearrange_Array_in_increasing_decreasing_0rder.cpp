/*
Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8

*/


// Method 1
// Sort the array in ascendng order
// Print first half
// and then print second half in reverse order
// TC: o(n*log(n)) and O(n) for printing the array
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
void reArrange(vector<int> &arr,int n){
   sort(arr.begin(),arr.end());
   
   for(int i=0;i<=(n/2)-1;i++){
       cout<<arr[i]<<" ";
   }
   for(int i=n-1;i>=(n/2);i--){
       cout<<arr[i]<<" ";
   }
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    reArrange(arr,n);
    return 0;
}