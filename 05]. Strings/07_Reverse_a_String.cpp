// Method 1
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void reverseString(string& str,int n){
  
  int p1=0;
  int p2=n-1;
  
  while(p1<=p2){
      char temp = str[p1];
      str[p1] = str[p2];
      str[p2] = temp;
      p1++;
      p2--;
  }
  
  cout<<str;
}
int main(){
    string str = "Rohan Mogali";
    int n = str.length();
    
    reverseString(str,n);
    
    return 0;
}