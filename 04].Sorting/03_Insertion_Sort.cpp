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
// TC: O(n2)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
  
  for(int i=0;i<n;i++){
      int j=i;
      
      while(j>0 && arr[j-1]>arr[j]){
          int temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
          j--;
      }
  }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    insertionSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}