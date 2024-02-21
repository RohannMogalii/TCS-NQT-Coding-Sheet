/*

Example 1:
Input: N = 5, array[] = {1,2,3,4,5} K=2
Output: {3,4,5,1,2}
Explanation: Rotate the array to right by 2 elements.

Example 2:
Input: N = 7, array[] = {1,2,3,4,5,6,7} K=3
Output: {4,5,6,7,1,2,3}
Explanation: Rotate the array to right by 3 elements.

*/

// ---------------------------------------------------------------------------------------------------------------

// Method 1                          [  optimal Approach  ]
// For Rotating Elements to right
// Reversal technique

// TC: O(n)
// SC: O(1)


#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void rightRotateArr(vector<int> &arr,int n,int k){
    
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
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
    
    rightRotateArr(arr,n,k);
    cout<<"Array after Right rotation: "<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

// -----------------------------------------------------------------------------------------------------------------

// For Rotating Elements to right

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void leftRotateArr(vector<int>&arr,int n,int k){
    
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    
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
    
    leftRotateArr(arr,n,k);
    
    cout<<"Array after Left rotation: "<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
