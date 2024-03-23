/*

Example 1:
Input: c = ‘A’
Output: 65
Explanation: ASCII value of A is 65

Example 2:
Input: c = ‘e’
Output: 101
Explanation: ASCII value of e is 101

*/

// -----------------------------------------------------

// Method 1
// Converting the char value to int
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void findASCIIvalue(char character){
    cout<<int(character);
}
int main(){
    char character;
    cin>>character;
    findASCIIvalue(character);
    
    return 0;
}