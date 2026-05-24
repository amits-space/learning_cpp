#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n, num;
    cout<<"Geometric progression:\nEnter the number for geometric progression: ";
    cin>>num;
    cout<<"Enter the number of terms for geometric progression: ";
    cin>>n;
    
    cout<<"The geometric progression is: \n";

    for(i=1; i<=n; i++){
        cout<<num<<"^"<<i<<" = "<<pow(num, i)<<"\n";
    }

    return 0;
}
