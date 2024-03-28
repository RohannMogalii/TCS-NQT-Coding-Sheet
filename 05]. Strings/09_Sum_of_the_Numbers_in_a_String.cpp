/*

Example 1:
Input: string = “123xyz”
Output: 123

Example 2:
Input: string = “1xyz23”
Output: 24

*/

// ---------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;
int sumOfIntegers(string& str,int n){
    int Num = 0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(str[i] >= '0' && str[i] <= '9' ){
            Num = (Num * 10) + (str[i]-'0');
        }else{
            sum = sum + Num;
            Num = 0;
        }
    }
    return Num + sum;
}
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    
    cout<<sumOfIntegers(str,n);
    
    return 0;
}