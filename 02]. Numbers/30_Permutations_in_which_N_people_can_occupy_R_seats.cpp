/*

Example 1:
Input: N = 5, r = 3
Output: 60
Explanation: To permute n people in r seats we have to find the value of n!/(n-r)!.The value of 5!/(5-3)! Is 60.

Example 2:
Input: N=6,r = 4.
Output: 360

*/

// -------------------------------------------------------------------------------------------------------------------------

// Method 1
// Using formula of ncr
// TC: O(n)+O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    
    int r;
    cin>>r;
    
    int num = fact(n);
    int den = fact(n-r);
    
    cout<<num/den;
}

// -------------------------------------------------------------------------------------------------------------------------

// Method 2
// n!/(n-r)! can also be written as n*(n-1)*(n-2)….(n-r+1).Using this we can calculate n!/(n-r)! in O(n) time complexity.

// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int solve(int n,int r){
    int ans=1;
    
    for(int i=n;i>=n-r+1;i--){
        ans*=i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    
    int r;
    cin>>r;
    
    
    cout<<solve(n,r);
}