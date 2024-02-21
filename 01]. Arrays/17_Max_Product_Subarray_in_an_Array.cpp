/*

Example 1:
Input:
 Nums = [1,2,3,4,5,0]
Output:
 120
Explanation:
 In the given array, we can see 1×2×3×4×5 gives maximum product value.


Example 2:
Input:
 Nums = [1,2,-3,0,-4,-5]
Output:
 20
Explanation:
 In the given array, we can see (-4)×(-5) gives maximum product value.

*/


// -------------------------------------------------------------------------------------------------------

// Method 1    [  Optimal Solution   ]  [  Kadane's Algorithm  ]
// TC: O(N)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
void maxProdSubarray(vector<int>&arr,int n){
    int prod=1;
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++){
        prod*=arr[i];
 
        if(prod>maxi){
            maxi=prod;
        }
        
        if(prod==0){
            prod=1;
        }
    }
    cout<< maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    maxProdSubarray(arr,n);
    
    return 0;
}


// -----------------------------------------------------------------------------------------------------

// Method 2     [   Better Approach  ]
// TC: O(n2) using two loops
// SC: O(n)


#include<bits/stdc++.h>
using namespace std;
void maxProdSubarray(vector<int>&arr,int n){
    int result=INT_MIN;
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i;j<n;j++){
                prod = prod * arr[j];
            result = max(result,prod);
        }
    }
    cout<<result;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    maxProdSubarray(arr,n);
    
    return 0;
}






// ---------------------------------------------------------------------------------------------------

// Method 3   [   Brute Force Approach ]
// TC: O(n3) using 3 loops
// SC: O(1) 

#include<bits/stdc++.h>
using namespace std;
void maxProdSubarray(vector<int>&arr,int n){
    int result=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int prod=1;
            for(int k=i;k<=j;k++){
                prod = prod * arr[k];
            }
            result = max(result,prod);
        }
    }
    cout<<result;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    maxProdSubarray(arr,n);
    
    return 0;
}