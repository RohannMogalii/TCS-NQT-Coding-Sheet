/*

Example 1:
Input:
n=4
a=2
d=2
Output: 20
Explanation: 2+4+6+8 = 20

Input:
n=8
a=2
d=5
Output: 124
Explanation: -2 +3 + 8 + 13 + 18 + 23 + 28 + 33 = 124

*/

// ------------------------------------------------------------------------


// Method 1                   [  Optimal Approach  ]
// Using formula
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void sumOfAP(int n,float a,float d){

   cout<< "Sum: "<< ( n / 2.0 ) * ( 2.0 * a + (n-1) * d );
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    float a;
    cout<<"a: ";
    cin>>a;
    
    float d;
    cout<<"d: ";
    cin>>d;
    
    sumOfAP(n,a,d);
    
    
    return 0;
}