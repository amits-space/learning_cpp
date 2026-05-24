#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int A[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    int i=0;
    cout<<"Enter the key to be searched: ";
    int k;
    cin>>k;


    while (A[i]!=k){
        i++;
    }

    if (i<n)
        cout<<"The element was found at: "<<i;
    else
        cout<<"The element was not found.";
    
    return 0;

}