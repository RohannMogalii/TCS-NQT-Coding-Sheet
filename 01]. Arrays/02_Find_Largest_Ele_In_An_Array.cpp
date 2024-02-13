/*

Find the Largest element in an array
Problem Statement: Given an array, we have to find the largest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 


*/

// Method 1
// Time Complexity: O(n*log(n))
// Space Complexoty: O(1)

/*
#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Largest Ele: "<<findMax(arr,n);
    return 0;
}
*/

// Method 2
// Time Complexity: O(n*log(n))
// Space Complexoty: O(1)

#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> &arr,int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Largest Ele: "<<findMax(arr,n);
    return 0;
}