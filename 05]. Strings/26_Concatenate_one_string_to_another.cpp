/*
input : str1 = "Rohan "
        str2 = "Mogali"
Output: Rohan Mogali

*/

// ------------------------------------------------------

// Method 1
// using + operator
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void concatStrings(string& str1,string& str2){
    cout<<str1+str2;
}
int main(){
    string str1 = "Rohan ";
    string str2 = "Mogali";
    concatStrings(str1,str2);
    return 0;
}

// ---------------------------------------------------------

// Method 2
// Using append() function 
// TC: O(1)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void concatStrings(string& str1,string& str2){
    str1.append(str2);
    cout<<str1;
}
int main(){
    string str1 = "Rohan ";
    string str2 = "Mogali";
    concatStrings(str1,str2);
    return 0;
}



