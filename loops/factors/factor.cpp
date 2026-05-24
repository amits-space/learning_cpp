#include<iostream>
using namespace std;

void factor(int n){
    int i;
    for (i=n; i>0; i--){
        if (n%i==0)
            cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number to be factorised: ";
    cin>>n;
    cout<<"\nThe Factors are:\n";
    factor(n);
}
    