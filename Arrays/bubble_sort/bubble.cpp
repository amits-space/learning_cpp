#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array:\n";

    for(int i=0; i<n; i++){
        cout<<"A["<<i<<"]: ";
        cin>>A[i];
    }

    int temp;

    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }


    cout<<"The sorted array is:\n";
    for(int x: A)
        cout<<x<<" ";
    
    return 0;
}
