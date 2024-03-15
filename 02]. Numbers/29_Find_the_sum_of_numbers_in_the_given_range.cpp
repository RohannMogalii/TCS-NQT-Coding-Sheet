/*

Example 1:
Input: l=2, r=7
Output: 27
Explanation: 2+3+4+5+6+7=27. Therefore 27 is the answer.

Example 2:
Input: l=5, r=9
Output: 35
Explanation: 5+6+7+8+9=35. Therefore 35 is the answer.

*/

// -----------------------------------------------------------------------

// Method 1
// Looping from a to b and calculating the sum
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void getSum(int a,int b){
    
    int sum=0;
   for(int i=a;i<=b;i++){
       sum=sum+i;
   }
   
   cout<<sum;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    
    getSum(a,b);
    
    return 0;
}

// ---------------------------------------------------------------------------

// Method 2                                   [  Optimial approach  ]
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void getSum(int a,int b){
//   calculate sum from 1 to b
//   calculate sum from 1 to a-1
  
//   return the difference of both sums we get the sum from a to b
   cout<< (b*(b+1))/2 - ((a-1)*a)/2;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    
    getSum(a,b);
    
    return 0;
}