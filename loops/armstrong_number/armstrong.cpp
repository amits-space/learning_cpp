#include<iostream>

using namespace std;

int main(){
    int m, n, r, sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    m=n;
    cout<<"Checking Armstrong number: ";
    
    while(n>0){
        r=n%10;
        n=n/10;
        sum = sum+ r*r*r;
    }

    if (sum==m){
        cout<<"The number is an armstrong number.";

    }
    else{
        cout<<"The number is not an Armstrong Number";
    }
    return 0;
}