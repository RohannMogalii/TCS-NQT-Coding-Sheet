/*

Example 1:
Input: 3/4 + 1/7 
Output: 25/28
Explanation: Since 3/4 + 1/7 = 25/28

Example 2:
Input: 5/2 +1/2
Output: 3/1
Explanation: Since 5/2 + 1/2 = 3/1

*/

// -----------------------------------------------------------------------

// Method 1
// TC: O(1);
// SC: O(1);

#include<bits/stdc++.h>
using namespace std;

void solve(int a1,int b1,int a2,int b2){
    
    int a3,b3;
    a3 = (a1*b2) + (b1*a2);
    b3 = (b1*b2);
    
    cout<<a1<<"/"<<b1<<" + "<<a2<<"/"<<b2<<" = "<<a3<<"/"<<b3;
}
int main(){
    int a1,b1;
    cin>>a1;
    cin>>b1;
    
    cout<<"="<<a1<<"/"<<b1<<endl;
    
    int a2,b2;
    cin>>a2;
    cin>>b2;
    
    cout<<"="<<a2<<"/"<<b2<<endl;
    
    
    solve(a1,b1,a2,b2);
}