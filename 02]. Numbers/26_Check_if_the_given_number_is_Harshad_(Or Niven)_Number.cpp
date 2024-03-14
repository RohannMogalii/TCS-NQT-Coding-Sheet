/*

If the sum of digits is divisible by the number then it is called Harshad number.

Example 1:
Input: 378
Output: Yes it is a Harshad number.
Explanation: 3+7+8=18. 378 is divisible by 18. Therefore 378 is a harshad number.

Example 2:
Input: 379
Output: No
 it is not a Harshad number.
Explanation: 3+7+9=19. 379 is not divisible by 19. Therefore 379 is a harshad number.

*/

// -------------------------------------------------------------------------------------------------

// Method 1

// Here we are stroing the original number into the temporary variable
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isHarshad(int n){
    int sum=0;
    int temp=n;
    while(n){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    
    return (temp%sum == 0);
}

int main(){
    int n;
    cin>>n;
    
    if(isHarshad(n)){
        cout<<"Yes, it is a Harshad number."<<endl;
    }else{
        cout<<"No, it is not a Harshad number."<<endl;
    }
    
    return 0;
}

// -------------------------------------------------------------------------------------------------

// Method 2
// Here instead of using the temporary variable i am converting the number to string and performing the actions
// TC: O(N)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isHarshad(int n){
    int sum=0;
    // int temp=n;
    string str = to_string(n);
    for(int i=0;i<str.length();i++){
        sum=sum+str[i]-'0';
    }
    // while(n){
    //     int rem=n%10;
    //     sum=sum+rem;
    //     n=n/10;
    // }
    
    return (n%sum == 0);
}

int main(){
    int n;
    cin>>n;
    
    if(isHarshad(n)){
        cout<<"Yes, it is a Harshad number."<<endl;
    }else{
        cout<<"No, it is not a Harshad number."<<endl;
    }
    
    return 0;
}