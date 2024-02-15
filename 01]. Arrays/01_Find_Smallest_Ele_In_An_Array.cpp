/*
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.
*/

// Method 1
// Time Complexity: O(n*log(n))
// Space Complexoty: O(1)


#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    return arr[0];
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Smallest Ele: "<<findMin(arr,n);
    return 0;
}


// Method 2
// Time Complexity: O(n)
// Space Complexoty: O(1)

#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int> &arr,int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Smallest Ele: "<<findMin(arr,n);
    return 0;
}
