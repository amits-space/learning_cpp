//bubble sort algorithm

#include<bits/stdc++.h>
using namespace std;

void sort(int A[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int A[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    sort(A, n);
    
    cout<<"The sorted array is:\n";
    
    for(int x:A)
        cout<<x<<endl;
    
    return 0;
}