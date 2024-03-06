/*

Problem Statement: Given two numbers. Find the greatest of two numbers.

Example 1:
Input: 1 3
Output: 3
Explanation: Answer is 3,since 3 is greater than 1.

Input: 1.123  1.124
Output: 1.124
Explanation: Answer is 1.124,since 1.124 is greater than 1.123

*/

// ----------------------------------------------------------------------------

// Method 1
// Using if-else statements
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findGreatest(double a,double b){
   if(a>b){
       cout<<"Greatest: "<<a<<endl;
   }else if(a<b){
       cout<<"Greatest: "<<b<<endl;
   }else{
       cout<<"Equal"<<endl;
   }
}
int main(){
    double a;
    cout<<"a: ";
    cin>>a;
   
    double b;
    cout<<"b: ";
    cin>>b;
    
    findGreatest(a,b);
    
    return 0;
}

// ------------------------------------------------------------------------------------

// Method 2
// Using max() function
// TC: O(1)
// SC: O(1)


#include<bits/stdc++.h>
using namespace std;

void findGreatest(double a,double b){
   cout<<"Greatest: "<<max(a,b);
}
int main(){
    double a;
    cout<<"a: ";
    cin>>a;
   
    double b;
    cout<<"b: ";
    cin>>b;
    
    findGreatest(a,b);
    
    return 0;
}