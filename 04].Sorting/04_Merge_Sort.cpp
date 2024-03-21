/*

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52


Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1,2,3,4,5

*/

// -------------------------------------------------------------------

// Method 1
// TC: O(nlogn)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int first= left;
    int second = mid+1;
    int k = left;
    
    int brr[right+1];
    
    while(first<=mid && second <= right){
        if(arr[first]<=arr[second]){
            brr[k] = arr[first];
            first++;
        }else{
            brr[k] = arr[second];
            second++;
        }
        k++;
    }
    
    while(first<=mid){
        brr[k++] = arr[first++];
    }
    
    while(second<=right){
        brr[k++]=arr[second++];
    }
    
    for(int i=left;i<=right;i++){
        arr[i] = brr[i];
    }
}

void mergeSort(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    
    int mid = (left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
    
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left = 0;
    int right = n-1;
    
    mergeSort(arr,left,right);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}