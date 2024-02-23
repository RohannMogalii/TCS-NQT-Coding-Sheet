/*

Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5

*/

// ----------------------------------------------------------------------------------------------

// Method 1                                             [  Optimal Approach  ]
// TC: O(n*log(n)) for sorting te array
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findMedian(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    if(n%2!=0){   // if n is odd
        cout<<arr[(n/2)]<<endl;
    }
    else{          // if n is even
        int first= (n/2)-1;
        int second = (n/2);
        cout<<(double)(arr[first]+arr[second])/2<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMedian(arr,n);
    
    return 0;
}
