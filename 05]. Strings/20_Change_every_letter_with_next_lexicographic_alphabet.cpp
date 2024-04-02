/*
Example 1:
Input: string str = “abcdxyz”
Output: bcdeyza

Example 2:
Input: string str = “Java”
Output: Kbwb

*/

// -----------------------------------------------

// Method 1
// Using ascii codes
// TC: O(N)
// SC:O(1)

#include<bits/stdc++.h>
using namespace std;

void solve(string& str){
    for(int i=0;i<str.length();i++){
        int ascii = (int)str[i];
        
        if(ascii == 90){
            str[i] = (char)(65);
        }
        else if(ascii == 122){
            str[i] = (char)(97);
        }
        else if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122){
            str[i] = (char)(ascii + 1);
        }
    }
    
    cout<<str;
}

int main(){
    string str = "Rohan Mogali";
    
    solve(str);
    
    return 0;
}