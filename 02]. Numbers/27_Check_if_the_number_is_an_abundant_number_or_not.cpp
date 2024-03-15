/*

Definition: If the sum of divisors of a number is greater than the number then it is called abundant number.

Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.

Example 2:
Input: 21
Output: Not Abundant Number
Explanation:Divisors of 21 are 1,3,7. 1+3+7=11, Since 11 is smaller than 21, 11 is not an abundant number.

*/

// -----------------------------------------------------------------------------------------------------------------------------------

// Method 1
// finding the divisors by looping from 1 to n
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isAbundant(int n){
    
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    sum=sum-n;
    
    if(sum>n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    
    if(isAbundant(n)){
        cout<<"Abundant number."<<endl;
    }else{
        cout<<"Not Abundant number."<<endl;
    }
    
    return 0;
}

// -----------------------------------------------------------------------------------------------------------------------------------

// Method 2              [  Optimal Approach  ]
// finding the divisors by looping from 1 to sqrt(n)
// TC: O(sqrt(n))
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

bool isAbundant(int n){
    
    int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                sum+=i;
            }else{
                sum+=i;
                sum+=n/i;
            }
        }
    }
    sum=sum-n;
    
    if(sum>n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    
    if(isAbundant(n)){
        cout<<"Abundant number."<<endl;
    }else{
        cout<<"Not Abundant number."<<endl;
    }
    
    return 0;
}