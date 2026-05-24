#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter the elements of the array:\n";
    
    for(int i=0; i<n; i++){
        cout<<"Arr["<<i<<"]: ";
        cin>>Arr[i];
    }

    int min=Arr[0];

    for(int i=0; i<n; i++){
        if(Arr[i]<=min){
            min=Arr[i];
        }
    }

    cout<<"The least value element is: "<<min;
}