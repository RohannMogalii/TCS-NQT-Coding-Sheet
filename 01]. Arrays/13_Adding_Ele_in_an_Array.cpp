/*

Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7

Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4
*/

// ------------------------------------------------------------------------------------------------------

// Insertion at beginning
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void insertAtBeginning(int arr[],int n,int value){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int value;
    cin>>value;
    insertAtBeginning(arr,n,value);
    cout<<"Updated Array: "<<" ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}



// ---------------------------------------------------------------------------------------------

// Insertion at Ending
// TC: O(n)
// SC: O(1)


#include<bits/stdc++.h>
using namespace std;

void insertAtEnd(int arr[],int n,int value){
    arr[n]=value;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int value;
    cin>>value;
    insertAtEnd(arr,n,value);
    cout<<"Updated Array: "<<" ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


// ----------------------------------------------------------------------------------------

// Insertion at specific position
// TC: O(n)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;

void insertAtPosition(int arr[],int n,int pos,int value){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value;
    cout<<"Enter Value: ";
    cin>>value;

    int pos;
    cout<<"Enter Position: ";
    cin>>pos;
    insertAtPosition(arr,n,pos,value);
    cout<<"Updated Array: "<<" ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}