//program to count the number of positive and negative integers in an array;

#include<iostream>
using namespace std;

int main(){
    int n, neg=0, pos=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter the elements in the array:\n";
    
    for(int i=0; i<n; i++){
        cout<<"Arr["<<i<<"]: ";
        cin>>Arr[i];
    }

    for(int i=0; i<n; i++){
        if(Arr[i]<0)
            neg++;
        else
            pos++;
    }

    cout<<"Total number of positive integers in the Array: "<<pos<<endl;
    cout<<"Total number of negative integers in the Array: "<<neg<<endl;

    return 0;
}