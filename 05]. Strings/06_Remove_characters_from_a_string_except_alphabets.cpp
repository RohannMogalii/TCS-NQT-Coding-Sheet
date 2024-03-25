
/*
Example 1:
Input: string str = "take12% *&u ^$#forward"
Output: takeuforward
Explanation:
Characters 1,2,%,*,&,^,$,# along with whitespaces are 
removed but the order of remaining alphabets is preserved.

Example 2:
Input: String str = "1.Python & 2.Java"
Output: PythonJava
Explanation: 
Characters 1.&2. along with whitespaces are removed 
but the order of remaining alphabets is preserved.

*/

// -----------------------------------------------------------------

// Method 1
// Using extra space to store
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void removeExtras(string& str,int n){
   string ans;
   
    for(int i=0;i<n;i++){
        int ascii = (int)str[i];
        if((ascii >= 65 && ascii <= 90) || (str[i]>= 97 && str[i]<= 122)){
           ans.push_back(str[i]);
        }
    }
    
    cout<<ans;
}
int main(){
    string str = "1.Python & 2.Java";
    int n = str.length();
    
    removeExtras(str,n);
    
    return 0;
}