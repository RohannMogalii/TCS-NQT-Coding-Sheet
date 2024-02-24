/*

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.

*/

// ------------------------------------------------------------------------------------


// Method 1              [  Optimal Approach  ]
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[],int left,int right){
   
   while(left<=right){
       int temp = arr[left];
       arr[left]=arr[right];
       arr[right]=temp;
       left++;right--;
   }
}
void rotateArrayLeft(int arr[],int n,int k){
    
    
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);
    
}
void rotateArrayRight(int arr[],int n,int k){
    
    Reverse(arr,0,n-1);
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    
}
int main(){
    cout<<"Enter Size of the array n: ";
    int n;
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter K: By how many elements the array should rotate: ";
    int k;
    cin>>k;
    
    cout<<"Rotate by 1.left or 2.Right?: ";
    int ch;
    cin>>ch;
    
    switch(ch){
        case 1: 
            rotateArrayLeft(arr,n,k);
            break;
        case 2:
            rotateArrayRight(arr,n,k);
            break;
    }
    
    
    cout<<"Array after rotation: "<<" ";
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}