/*
Example 1:
Input: Str = “take u forward”
Output: tk  frwrd
Explanation: All vowels are removed from the given String.

Example 2:
Input: Str = “I am very happy today”
Output:  m vry happy tdy
Explanation: All vowels are removed from the given String.

*/

// -------------------------------------------------------------------------

// Method 1
// Using another string to store the characters without vowels
// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void removeVowels(string str,int n){
    string ans="";
    int j=0;
    for(int i=0;i<n;i++){
        str[i] = towlower(str[i]);
    }
    
    for(int i=0;i<n;i++){
        if(str[i] != 'a' && str[i]!='e' && str[i] != 'i' && str[i]!='o' && str[i]!='u'){
            ans[j] = str[i];
            j++;
        }
    }

    for(int i=0;i<j;i++){
        cout<<ans[i];
    }
}
int main(){
    string str = "I am very happy today";
    int n = str.length();
    
    removeVowels(str,n);
    
    return 0;
}

// ----------------------------------------------------------------------------------------------------

// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void removeVowels(string& str,int n){
   
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            str = str.substr(0,i)+str.substr(i+1);
        }
    }
    
    cout<<str;
}
int main(){
    string str = "How are you doing";
    int n = str.length();
    
    removeVowels(str,n);
    
    return 0;
}

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Method 2
// Using an extra string to store characters which are not vowels
// TC: O(n)
// SC: O(N)

#include<bits/stdc++.h>
using namespace std;

void removeVowels(string& str,int n){
   string ans;
   
    for(int i=0;i<n;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            ans.push_back(str[i]);
        }
    }
    
    cout<<ans;
}
int main(){
    string str = "How are you doing";
    int n = str.length();
    
    removeVowels(str,n);
    
    return 0;
}