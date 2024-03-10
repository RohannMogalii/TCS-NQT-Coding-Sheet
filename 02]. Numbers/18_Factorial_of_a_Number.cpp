/*

Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it.
More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number

Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1

Example 2:
Input: X = 3
Output: 6
Explanation: 3!=3*2*1

*/

// -----------------------------------------------------------------------------------------------------------

// Method 1
// Iterative way
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void solveFactorial(int n){
    int fact=1;
   
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    
    cout<<fact;
}
int main(){
    int n;
    cin>>n;
    
    solveFactorial(n);
    
    return 0;
}

// ---------------------------------------------------------------------------------------------------------------------

// Method 2
// Recursive way
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

int solveFactorial(int n){

    if(n==0){
        return 1;
    }
    return n * solveFactorial(n-1);
}
int main(){
    int n;
    cin>>n;
    
    cout<<solveFactorial(n);
  
    return 0;
}
