#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the array size: ";
    int n;
    cin>>n;
    int Arr[n];
    cout<<"Enter your elements in the array:\n";

    for (int i=0; i<n; i++){
        cout<<"Arr["<<i<<"]= ";
        cin>>Arr[i];
    }

    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    int index=-1;
    for(int i=0; i<n; i++){
        if(Arr[i]==key)
        {
            index=i;
            break;
        }
        else
            index=-1;
    }

    if(index==-1){
        cout<<"Element not found!";
    }
    else
        cout<<"Element found at index "<<index;

    return 0;
    
}