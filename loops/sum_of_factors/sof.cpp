#include<iostream>
using namespace std;

void sof(int n){
    int i, sum=0;
    for (i=n; i>0; i--){
        if (n%i==0){
            cout<<i<<endl;
            sum=sum + i;
        }
    }

    cout<<"Sum of the factors is: "<<sum;
}

int main(){
    int n;
    cout<<"FACTOR SUMMING PROGRAM"<<"\nEnter the number to be factorised: ";
    cin>>n;
    cout<<"\nThe Factors are:\n";
    sof(n);
}
    