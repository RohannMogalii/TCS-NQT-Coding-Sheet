/*

Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6

Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)

*/

// --------------------------------------------------------------------------------------------------------

// Method 1
// maintening the last and secondlast variable
// TC: O(n)
// SC: O(1)



#include<bits/stdc++.h>
using namespace std;

void printFibonacci(int n){
   
    int secondLast=0;
    int last=1;
    if(n<=0){
        cout<<n;
        
    }else{
        cout<<secondLast<<" "<<last<<" ";
        for(int i=2;i<=n;i++){
            int curr = secondLast+last;
            secondLast=last;
            last=curr;
            cout<<curr<<" ";
        }
    }
   
}
int main(){
    int n;
    cin>>n;
    
    printFibonacci(n);
    
    return 0;
}

// ----------------------------------------------------------------------------------------------------------

// Method 2
// Using recursive functions (slow)
// TC: O(2n)
// SC: O(n)


#include<bits/stdc++.h>
using namespace std;

int printFibonacci(int n){
   
    if(n<=1){
        return n;
    }
        
    return printFibonacci(n-1)+printFibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<=n;i++){
        cout<<printFibonacci(i)<<" ";
    }
    
    return 0;
}