/*

Problem Statement: Given a geometric Progression (G.P) sequence with some inputs as:-

    a, first term
    r, common ratio
    n, number of terms


Example 1:
Input: a=1 , r=0.5 , n=3
Output: 1.75
Explanation: The sum of given GP Series is 1.75

Example 2:
Input: a=3 , r=5 , n=2
Output: 18
Explanation: The sum of the given GP Series is 18

*/

// ----------------------------------------------------------------------------------------------------

// Method 1                        [  Optimal Approach  ]
// Using formula
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void sumOfGP(int n,float a,float r){
    cout<<"Sum: "<<(a * (pow(r,n) - 1)) / (r - 1);
}
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    float a;
    cout<<"a: ";
    cin>>a;
    
    float r;
    cout<<"r: ";
    cin>>r;
    
    sumOfGP(n,a,r);
    
    return 0;
}