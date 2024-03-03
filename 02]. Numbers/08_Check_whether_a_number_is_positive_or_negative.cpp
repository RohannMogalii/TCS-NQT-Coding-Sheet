/*

Example 1:
Input: n=5
Output: Positive

Example2:
Input: n=-6
Output: Negative

*/

// ---------------------------------------------

// Method 1          [ optimal Approach  ]
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool check(int N){

    if(N>0){
        return true;
    }else if(N<0){
        return false;
    }else{
        cout<<"Neither Positive Nor Negative";
    }
    
}

int main(){
    int N;
    cin>>N;


    if(check(N)){
        cout<<"Positive"<<endl;
    }else{
        cout<<"Negative"<<endl;
    }
    
    return 0;
}