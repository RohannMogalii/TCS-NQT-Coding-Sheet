/*

Problem Statement: Given three numbers. Find the greatest of three numbers.

Example 1:
Input: 1 3 5
Output: 5
Explanation: Answer is 5.Since 5 is greater than 1 and 3.

Example 2:
Input: 1.123  1.124 1.125
Output: 1.125
Explanation: Answer is 1.125. Since 1.125 is greater than 1.123 and 1.124

*/

// ---------------------------------------------------------------------------------------

// Method 1
// Using max() function
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findGreatest(double a,double b,double c){
   cout<<"Greatest: "<<max(a,max(b,c));
}
int main(){
    double a;
    cout<<"a: ";
    cin>>a;
   
    double b;
    cout<<"b: ";
    cin>>b;
    
    double c;
    cout<<"c: ";
    cin>>c;
    
    findGreatest(a,b,c);
    
    return 0;
}

// ----------------------------------------------------------------------------------------------

// Method 2
// Using if-else statements
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findGreatest(double a,double b,double c){
   if(a>b && a>c){
       cout<<"Greatest: "<<a<<endl;
   }else if(b>a && b>c){
       cout<<"Greatest: "<<b<<endl;
   }else if(c>a && c>b){
       cout<<"Greatest: "<<c<<endl;
   }
}
int main(){
    double a;
    cout<<"a: ";
    cin>>a;
   
    double b;
    cout<<"b: ";
    cin>>b;
    
    double c;
    cout<<"c: ";
    cin>>c;
    
    findGreatest(a,b,c);
    
    return 0;
}