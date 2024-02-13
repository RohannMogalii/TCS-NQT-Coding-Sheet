/*
Reverse a given Array
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

*/

// Method 1
// Time Complexity: O(n)
// Space Complexity: O(n)

/*
#include<bits/stdc++.h>
using namespace std;

void printReversedArr(vector<int> &arr,int n){
    cout<<"Reversed Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArr(vector<int> &arr,int n){
    vector<int> reversedArr(n);
    int j =0;
    for(int i=n-1;i>=0;i--){
        reversedArr[j]=arr[i];
        j++;
    }
    printReversedArr(arr,n);
    
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    reverseArr(arr,n);
    return 0;
}
*/

// Method 2
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void printReversedArr(vector<int> &arr,int n){
    cout<<"Reversed Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArr(vector<int> &arr,int n){
    int p1=0;
    int p2=n-1;
    // for(int i=0;i<=sqrt(n);i++){
    //     swap(arr[i],arr[n-1-i]);
    // }
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;p2--;
    }
    printReversedArr(arr,n);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    reverseArr(arr,n);
    
    return 0;
}

// Method 3
// Using inbuilt Function
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
#include<bits/stdc++.h>
using namespace std;

void printReversedArr(vector<int> &arr,int n){
    cout<<"Reversed Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reverseArr(vector<int> &arr,int n){
    reverse(arr.begin(),arr.end());
    printReversedArr(arr,n);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    reverseArr(arr,n);
    
    return 0;
}
*/