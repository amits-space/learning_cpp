#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements in the Array: \n";
    for(int i=0; i<n; i++){
        cout<<"Enter element number "<<i+1<<": ";
        cin>>A[i];
    }
    
    cout<<"The max element of the array is: ";
    
    int MAX=A[0];
    
    for(int i=0; i<n; i++){
        if(A[i]>=MAX){
            MAX=A[i];
        }
    }
    
    cout<<MAX;
    return 0;
    
}