
/*

Example 1:
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153

Input:170 
Output: No, it is not an Armstrong Number
Explanation: 1^3 + 7^3 + 0^3 != 170

*/

// -------------------------------------------------------------------------


// Method 1           [  Optimal Approach  ]
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int N){

    int temp=N;
    int originalNo=N;
    int count=0,sumOfPower=0;
    while(temp){
        temp=temp/10;
        count++;
    }
    while(N){
        int rem=N%10;
        sumOfPower=sumOfPower+pow(rem,count);
        N=N/10;
    }

    return (sumOfPower==originalNo);
}

int main(){
    int N;
    cin>>N;


    if(isArmstrong(N)){
        cout<<"Yes, it is an Armstrong Number"<<endl;
    }else{
        cout<<"No, it is not an Armstrong Number"<<endl;
    }
    
    return 0;
}