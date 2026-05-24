#include<iostream>
using namespace std;

void Palindrome(int n){
    int rev=0, r;
    int m=n;

    while(n>0){
        r=n%10;
        n=n/10;
        rev= rev*10+r;
    }

    if (rev==m){
        cout<<"The number is a Palindrome";
    }
    else{
        cout<<"The number is not a Palindrome";
    }
}

int main(){
    int n;
    cout<<"-----Palindrome Number checker-----"<<"\n\nEnter your nnumber: ";
    cin>>n;

    Palindrome(n);
}