#include<bits/stdc++.h>
using namespace std;

bool primeCheck(int num){
    if (num<=1){
        return false;
    }
    int div=2;
    
    for(div=2; div<=num/2; div++){
        if(num%div==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"Program to check if the number is prime or not\n";
    int n;
    cout<<"Enter the number to be checked ";
    cin>>n;
    if(primeCheck(n)){
        cout<<"prime number";
    }
    else{
        cout<<"Not-prime";
    }
}