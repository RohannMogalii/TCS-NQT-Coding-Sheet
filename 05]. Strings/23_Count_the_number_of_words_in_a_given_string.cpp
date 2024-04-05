/*
Input : Rohan Mogali
Output: 2

Input : Hey there this is Rohan
Output: 4

*/

// --------------------------------------------------

// Method 1
// Counting the spaces and returning space+1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void Count(string& str){
    int n = str.length();
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i] == ' '){
            count++;
        }
    }
    
    cout<<count+1;
}
int main(){
    string str = "Rohan Mogali";
    Count(str);
    
    return 0;
}