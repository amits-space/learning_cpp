#include<bits/stdc++.h>
using namespace std;


void table(int n){
    int prod, i;
    for (i=1; i<=10; i++){
        prod=n*i;
        cout<<n<<"x"<<i<<" = "<<prod<<endl;
    }
}

int main(){
    int n;
    cout<<"Table Generator:\nEnter the number for table: ";
    cin>>n;
    table(n);
    return 0;
}