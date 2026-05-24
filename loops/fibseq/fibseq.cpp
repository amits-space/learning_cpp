#include<bits/stdc++.h>
using namespace std;

void fibseq(int n){
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    for (int i=2; i<=n; i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

int main(){
    int n;
    cout<<"Fibonacci Sequence:-\nEnter the number of terms in fibonacci sequence: ";
    cin>>n;
    fibseq(n);
    return 0;
}