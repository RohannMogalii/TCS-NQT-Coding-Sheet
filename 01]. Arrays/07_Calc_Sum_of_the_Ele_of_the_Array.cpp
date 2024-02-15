/*
Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 11
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11

*/

// ---------------------------------------------------------------------------------------------

// Method 1
// Using a sum variable
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
void calcSum(vector<int> &arr,int n){
   int sum=0;
   for(int i=0;i<n;i++){
       sum=sum+arr[i];
   }
   cout<<sum;
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    calcSum(arr,n);
    return 0;
}

// -----------------------------------------------------------------------------------------------

// Method 2
// Using formula

#include<bits/stdc++.h>
using namespace std;
void calcSum(vector<int> &arr,int n){
   int sum = (n*(n+1))/2;
   
   cout<<sum;
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    calcSum(arr,n);
    return 0;
}