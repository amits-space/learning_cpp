//Program to input array from the console and display it.


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the Array: ";
    
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"The array is: "<<endl;
    for(int x: a){
        cout<<x<<" ";
    }

    return 0;


}