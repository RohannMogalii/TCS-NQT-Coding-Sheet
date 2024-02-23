
/*

Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4 
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.

Example 2:
Input: N = 6, array[] = {-199,6,7,-199,3,5}
Output: -199 -199 3 5 6 7
Explanation: Since -199 is present 2 times so it will be printed at first , then 3 , 5 ,6 ,7 are present once in array , so print them in their sorted order.


*/

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// Method 1             [   Optimal Approach  ]
// Using hashmap
// TC: O(n) 
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> &p1, pair<int,int> p2){

    if(p1.second==p2.second){
        return p1.first<p2.second;
    }
    return p1.second>p2.second;
}

void sortByFrequency(vector<int> &arr,int n){
    unordered_map<int,int> mp;
    for(auto i:arr){
        mp[i]++;
    }
    
    vector<pair<int,int>> ans;
    
    for(auto i:mp){
        ans.push_back({i.first,i.second});
    }
    
    sort(ans.begin(),ans.end(),compare);
    
    for(int i=0;i<ans.size();i++){
        while(ans[i].second>0){
        cout<<ans[i].first<<" ";
        ans[i].second--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sortByFrequency(arr,n);
    
}