#include<bits/stdc++.h>
using namespace std;

int euclidAlgo(int m, int n){
    int r;
    while (n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}

int main(){
    int m, n;
    cout<<"Enter the numbers for gcd: ";
    cin>>m>>n;
    int ans=euclidAlgo(m, n);
    cout<<endl<<"The GCD of the numbers is: "<<ans;
    return 0;
}