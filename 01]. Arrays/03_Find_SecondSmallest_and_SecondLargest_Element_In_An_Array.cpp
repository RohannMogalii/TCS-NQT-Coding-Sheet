
/*
Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples:

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/


// ------------------------------------------------------------------------------------------------------------------

// Method 1                                           [  Brute Force Approach  ]
// Works only if there are no duplicates in an array
// Time Complexity: O(n*log(n))
// Space Complexity: O(1)


#include<bits/stdc++.h>
using namespace std;
void getSecondMaxMin(vector<int> &arr,int n){
    if(n==0){
        cout<<"Second Smallest: "<<-1<<endl;
        cout<<"Second Largest: "<<-1;
    }else if(n==1){
        cout<<"Second Smallest: "<<-1<<endl;
        cout<<"Second Largest: "<<-1;
    }
    else{
        sort(arr.begin(),arr.end());
        cout<<"Second Smallest: "<<arr[1]<<endl;
        cout<<"Second Largest: "<<arr[n-2];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    getSecondMaxMin(arr,n);
    return 0;
}

// -----------------------------------------------------------------------------------------------------------------

// Method 2                           [  Optimal Approach  ]
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int getSecondMin(vector<int> &arr,int n){
    int small = INT_MAX,secSmall = INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secSmall = small;
            small = arr[i];
        }else if(arr[i]<secSmall && arr[i]!=small){
            secSmall = arr[i];
        }
    }
    return secSmall;
}

int getSecondMax(vector<int> &arr,int n){
    int large=INT_MIN,secLarge=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            secLarge=large;
            large=arr[i];
        }else if(arr[i]>secLarge && arr[i]!=large){
            secLarge=arr[i];
        }
    }
    return secLarge;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sS = getSecondMin(arr,n);
    int sL = getSecondMax(arr,n);
    
    cout<<"Second Smallest: "<<sS<<endl;
    cout<<"Second Largest: "<<sL<<endl;
    return 0;
}
