/*

Example 1:
Input: N = 5
Output: 78.5
Explanation: Using formula  πr2 for finding area of circle we get area as 78.5

Example 2:
Input: N = 4
Output: 50.2
Explanation: Using formula  πr2 for finding area of circle we get area as 50.2

*/

// -----------------------------------------------------------------------------------------

// Method 1               [  Optimal Approach  ]
// Using Formula
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void areaOfCircle(int r){
  
  double area = 3.14 * r * r;
  
  cout<<area;
}
int main(){
    int r;
    cin>>r;
    
    areaOfCircle(r);
    return 0;
}