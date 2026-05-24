//Program to display the sum of elements of an Array


#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number of elements in the Array: ";
    int n;
    cin>>n;
    int A[n];

    for(int i=0; i<n; i++){
        cout<<"Enter Element number "<<i+1<<": ";
        cin>>A[i];
    }

    cout<<"The sum of the array is: ";

    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+A[i];
    }
    cout<<sum;
    return 0;
}