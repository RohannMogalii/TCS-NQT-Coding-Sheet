/*

Problem Statement: Check if the given year is a leap year or not.

Example 1:
Input: 1996
Output: Yes
Explanation: Since 1996 is a leap year answer is “Yes”.

Example 2:
Input: 2000
Output: Yes

Explanation: Since 2000 is a leap year answer is “Yes”.

*/

// -------------------------------------------------------------------------

// Method 1
// Leap year:
// 1.Year is divisible by 400
// 2.year is divisible by 4 but not by 100

#include<bits/stdc++.h>
using namespace std;

void isLeap(int year){
   
    if(year%400 == 0 || (year%4==0 && year%100 != 0)){
        cout<<"Yes!";
    }else{
        cout<<"No!";
    }
   
}
int main(){
    int year;
    cout<<"Year: ";
    cin>>year;
    
    isLeap(year);
    
    return 0;
}