/*

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not

*/

// -------------------------------------------------------------------------------------------------------------------------------------------------

// Method 1                        [  Basic ]
// finding the divisors and adding it to the sum ans comparing the sum and the number
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int N){

    int sum=0;
    for(int i=1;i<N;i++){
        if(N%i==0){
            sum=sum+i;
        }
    }
    return (sum == N);
    
}

int main(){
    int N;
    cin>>N;


    if(isPerfect(N)){
        cout<<N<<" is a Perfect Number"<<endl;
    }else{
        cout<<N<<" is not a Perfect Number"<<endl;
    }
    
    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------------

// Method 2                            [  Optimal approach  ]
// TC: O(sqrt(n))
// SC: O(1)


#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int N){

    int sum=1;
    for(int i=2;i<=sqrt(N);i++){
        if(N%i==0){
            sum=sum+i+N/i;
        }
    }
    return (sum == N);
    
}

int main(){
    int N;
    cin>>N;


    if(isPerfect(N)){
        cout<<N<<" is a Perfect Number"<<endl;
    }else{
        cout<<N<<" is not a Perfect Number"<<endl;
    }
    
    return 0;
}