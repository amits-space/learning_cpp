#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Program to calculate the factorial of a number\n";
    cout<<"Enter your number: ";
    int n;
    long long res=1;
    cin>>n;
    
    if (n==0){
        cout<<"The factorial of "<<n<<"="<<1;
        exit(0);
    }
    else{
        for(int i=1; i<=n; i++){
            res=res*i;
        }
    cout<<n<<"!= "<<res;
    }
}