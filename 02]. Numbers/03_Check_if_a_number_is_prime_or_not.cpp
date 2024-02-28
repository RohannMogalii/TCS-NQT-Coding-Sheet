

/*

Example 1:
Input: N = 3
Output: Prime
Explanation: 3 is a prime number

Example 2:
Input: N = 26
Output: Non-Prime
Explanation: 26 is not prime

*/

// ---------------------------------------------------------------------------------------



// Method 1                 [  Brute Force Approach  ]
// Looping till the number i=2 to i<N

// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

int isPrime(int N){
    
    if(N<2){
        return false;
    }
    for(int i=2;i<N;i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    
    if(isPrime(N)){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Non-Prime"<<endl;
    }
   
    
    return 0;
}



// -------------------------------------------------------------------------------------------



// Method 2                    [  Optimal Approach  ]
// Looping till sqrt(N)
// TC: O(sqrt(n))
// SC: O(1)


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    
    if(N<2){
        return false;
    }
    for(int i=2;i<=sqrt(N);i++){
        if(N%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    
    if(isPrime(N)){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Non-Prime"<<endl;
    }
   
    
    return 0;
}