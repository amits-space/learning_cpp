#include<bits/stdc++.h>
using namespace std;

void sort(int A[], int n)/*Since Binary Search only works with sorted Arrays, I have included the sorting function to sort the array that is
                         entered by the user before using the search algotithm on it.*/
{
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
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int A[n];
    cout<<"Enter the elements into the array:\n";
    
    for(int i=0; i<n; i++){
        cout<<"A["<<i<<"]: ";
        cin>>A[i];
    }

    sort(A, n);
    cout<<"The sorted array is:\n";
    for(int x: A)
        cout<<x<<" ";
    
    int key;
    cout<<"\nEnter the key element to be searched: ";
    cin>>key;


    int low=0, high=n-1;
    int mid;
    
    while (low<=high){
        mid= (low+high)/2;
        
        if(key==A[mid]){
            cout<<"The element is found at index "<<mid<<endl;
            cout<<"A["<<mid<<"]= "<<A[mid];
            return 0;
        }

        else if (key>A[mid]){
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    
    

    return 0;
    

}
