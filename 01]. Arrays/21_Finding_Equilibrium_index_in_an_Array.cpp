/*

Example 1:
Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4

Example 2:
Input: nums = [1,-1,4]
Output: 2
Explanation: The sum of the numbers before index 2 is: 1 + -1 = 0
The sum of the numbers after index 2 is: 0

*/

// --------------------------------------------------------------------------------------


// Method 1                          [  Optimal Approach  ]
// TC: O(n)
// SC: O(1)


#include<bits/stdc++.h>
using namespace std;

int findEquilibriumIndx(vector<int> &arr,int n){
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }
    
    int leftSum = 0,rightSum = totalSum;
    
    for(int i=0;i<n;i++){
        rightSum-=arr[i];
        
        if(leftSum == rightSum){
            return i;
        }
        
        leftSum+=arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int index = findEquilibriumIndx(arr,n);
    cout<<index;
    
    return 0;
}