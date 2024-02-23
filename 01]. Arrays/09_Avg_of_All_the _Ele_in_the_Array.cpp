/*

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 1.8
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8

*/

// -------------------------------------------------------------------------------------------------------------------------------

// Method 1                                    [ Optimal Approach ]
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void calculateAverage(vector<int>&arr,int n){
   double sum = 0;
   for(int i=0;i<n;i++){
       sum+=(double)arr[i];
   }
   double average = sum/n;
   cout<<average;
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    calculateAverage(arr,n);
    
    return 0;
}
