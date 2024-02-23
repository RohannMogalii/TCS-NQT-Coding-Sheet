/*

Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…

Example 2:
Input: 1 5 8 15 8 25 9
Output: 1 2 3 5 3 6 4
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so…

*/

// ------------------------------------------------------------------------------------------------------------------------

// Method 1      
// TC: O(n2)
// SC: O(n)


#include<bits/stdc++.h>
using namespace std;
void replaceEleByRank(vector<int>&arr,int n){
    
    
    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                s.insert(arr[j]);
            }
        }
        cout<<s.size()+1<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    replaceEleByRank(arr,n);
    
    return 0;
}

// ------------------------------------------------------------------------------------------------------------------------


// Method 2
// Using hashmap

// TC: O(n) + O(n*log(n)) + O(n)
// O(n) for copying elements to dummy array
// O(n*log(n)) for sorting the array
// O(n) for printing the ranks


// SC: O(n+n)  for using dummy array and hashmap


#include<bits/stdc++.h>
using namespace std;
void replaceEleByRank(vector<int>&arr,int n){
    
    vector<int> brr(n);
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    
    sort(brr.begin(),brr.end());
    
    int temp = 1;
    map<int,int> mp;
    
    for(int i=0;i<n;i++){
        if(mp[brr[i]] == 0){
            mp[brr[i]] = temp;
            temp++;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<mp[arr[i]]<<" ";
    }
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    replaceEleByRank(arr,n);
    
    return 0;
}