/*

Example 1:
Input:
 str= "sinstriiintng"
Output:
i - 4
n - 3
s - 2
t - 2
Explanation:
In the above example, 's' occurs twice, 'i' occurs four times, 't' occurs twice and 'n' occurs thrice. 'r' and 'g' occur only one time and hence are not considered.

Example 2:
Input:
 str= "abcdefg"
Output:
< -- No Output -- >
Explanation:

In the above example, every character occurs only once(no duplicates), therefore nothing to print.

*/

// --------------------------------------------------------------------------------------

// Method 1
// using frequency array 
// TC : O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void printDuplicateLetters(string& str,int n){
    string ans="";
    int freq[52] = {0};
    
    for(int i=0;i<n;i++){
        if('a'<=str[i] && 'z'>=str[i]){
            freq[str[i] - 'a']++;
        }
        else if('A'<=str[i] && 'Z'>=str[i]){
            freq[str[i] - 'A'+26]++;
        }
    }
    
    for(int i=0;i<52;i++){
        if(freq[i]>1){
            if(i<26){
                cout<<(char)(i+'a')<<" : "<<freq[i]<<endl;
            }else{
                cout<<(char)(i+'A'-26)<<" : "<<freq[i]<<endl;
            }
        }
    }

}
int main(){
    string str = "sinstriiintng";
    int n = str.length();
    
    printDuplicateLetters(str,n);
    
    return 0;
}