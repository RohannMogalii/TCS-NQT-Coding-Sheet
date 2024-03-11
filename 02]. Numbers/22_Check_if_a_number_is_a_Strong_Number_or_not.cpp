/*
   1. When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
   2. Strong number is also known as Krishnamurthi number/Peterson Number.

Examples 1:
Input: N = 145
Output: Yes
Explanation: 1! + 4! + 5! = 145. Hence 145 is a strong number. 

Example 2:
Input:  26
Output: No
Explanation: 2! + 6! = 722. Hence 26 is not a strong number.

*/

// ---------------------------------------------------------------------------------------------------------------------------------------------------

// Method 1
// TC: O(n*m)  n is number of digit and m is time taken for factorial
// SC:O(1)

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<1){
        return 1;
    }
    return n * factorial(n-1);
}
bool isStrong(int n){
    int temp=n;
    int sum=0;
    while(n){
        int rem = n%10;
        sum=sum+factorial(rem);
        n=n/10;
    }
    
    return (sum == temp);
}

int main(){
    int n;
    cin>>n;
   
    if(isStrong(n)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
    return 0;
}