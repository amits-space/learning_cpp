#include<iostream>
using namespace std;


int main(){
    int a, b, n;

    cout<<"Enter the numbers to check GCD: ";
    cin>>a>>b;

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    cout<<"GCD is: "<<a;
}
