/*

Example 1:
Input: array[] = {1,2,3,4,5} k=3                                                                              Output: 2                                                                                                              Explanation: The answer is 2 because 3 is present at 2nd index.

Example 2:
Input: array[]={6,7,9,5,3,10} k=10
Output: 5
Explanation: The answer is 5 because 10 is present at 5th index.

*/

// ---------------------------------------------------------------------------

// Method 1                 [  Brute Force Approach  ]
// Linear search
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int searchElement(vector<int> &arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            return i;
        }
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
    int k;
    cin>>k;
    
    int index = searchElement(arr,n,k);
    cout<<index;
    
    return 0;
}

// ------------------------------------------------------------------------------------


// Method 2                     [  Optimal Approach  ]
// Binary Search
// TC: O(logn)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int searchElement(vector<int> &arr,int n,int k){
    int left=0;
    int right=n-1;
    
    while(left<=right){
        int mid = (left+right)/2;
        
        if( arr[mid]== k){
            return mid;
        }else if(arr[mid] > k){
            right=mid-1;
        }else{
            left=mid+1;
        }
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
    int k;
    cin>>k;
    
    int index = searchElement(arr,n,k);
    cout<<index;
    
    return 0;
}
