/*

Example 1:
Input: string str=”Take u forward is Awesome”
Output: 
Vowels: 10
Consonants: 11
White spaces: 4

Example 2:
Input: string str=”India won the cricket match”
Output:
Vowels: 8
Consonants: 15
White spaces: 4

*/

// ---------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void Count(string& str,int n){
    
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    for(int i=0;i<n;i++){
        str[i]=towlower(str[i]);
    }
    
    for(int i=0;i<n;i++){
        if(str[i] == 'a' || str[i]=='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowels++;
        }else if(str[i] == ' '){
            spaces++;
        }else if(str[i] >= 'a' && str[i] <='z'){
            consonants++;
        }
    }
    
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    cout<<"White Spaces: "<<spaces<<endl;
}
int main(){
    string str = "India won the cricket match";
    int n = str.length();
    Count(str,n);
    
    return 0;
}