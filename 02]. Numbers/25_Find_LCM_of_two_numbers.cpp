/*

LCM of two numbers = Product of two numbers/ HCF of two numbers.

Example 1:
Input: num1 = 4,num2 = 8
Output: 8


Example 2:
Input: num1 = 3,num2 = 6
Output: 6

*/

// ---------------------------------------------------------------------------

// Method 1
// LCM of two numbers = Product of two numbers/ HCF of two numbers.
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int findGCD(int a,int b){
    int ans;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    return ans;
}

void findLCM(int a,int b){
    int mul = a*b;
    
    int ans = mul/findGCD(a,b);
    
    cout<<ans;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
   
    findLCM(a,b);
    
    return 0;
}