
/*

Example 1:
Input: n=5
Output: odd
Explanation: 5 is not divisible by 2.
 
Example 2:  
Input: n=6
Output: even
Explanation: 6 is divisible by 2.


*/

// -----------------------------------------------------------

// Method 1                              [  Optimal Approach  ]
// Using Divison
// TC:O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool oddOrEven(int N){

    if(N<1){
        cout<<"Neither Odd nor Even";
    }
    else{
        if(N%2==0){
            return true;
        }else{
            return false;
        }
    }
    
}

int main(){
    int N;
    cin>>N;


    if(oddOrEven(N)){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }
    
    return 0;
}