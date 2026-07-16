#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int i, j, temp, min;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min])
                min=j;
        }

        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n;   
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        arr[i]=rand()%1000;

    cout<<"The array is: "<<endl;
    for (int x: arr)
        cout<<x<<", ";

    selectionSort(arr, n);

    cout<<"\nthe sorted array is: "<<endl;
    for(int x: arr)
        cout<<x<<", ";

    return 0;

    
}