/*

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15

*/

// ---------------------------------------------------------

// Method 1             [  Brute Force Approach  ]
// Using loop
// TC: O(n) 
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void solve(int N){

    int sum=0;
    for(int i=1;i<=N;i++){
       sum=sum+i;
    }
   
   cout<<sum;
}

int main(){
    int N;
    cin>>N;
    
    solve(N);
    
    return 0;
}

// ---------------------------------------------------------------

// Method 2                   [  Optimal Approach  ]
// Using formula
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void solve(int N){

   cout<<  N * (N+1) / 2;

}

int main(){
    int N;
    cin>>N;
    
    solve(N);
    
    return 0;
}