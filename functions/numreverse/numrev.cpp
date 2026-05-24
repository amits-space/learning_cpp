#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev=0;
    do{
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }while (n>0);
    return rev;
}

int main(){
    cout<<"Enter the number to be reversed: ";
    int n;
    cin>>n;
    int rev= reverse(n);
    cout<<"The reversed number is: "<<endl;
    cout<<rev;
}