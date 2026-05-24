#include<bits/stdc++.h>
using namespace std;
//this is a different approach to checking if the number is prime or not
void checkPrime(int n){
    int i, count = 0; //initialising count to 0
    for (i=n; i>0; i++){
        if(n%i==0){
            count++;  //incrementing count when a factor of the number is found
        }
    }

    if (count == 2) //when count =2, the factors are 1 and n, i.e, n is prime
        cout<<n<<" is a prime number";
    else            //if count != 2, the number is not prime 
        cout<<n<<" is NOT a prime number";
}

int main(){
    int n; 
    cout<<"Enter the number to be checked: ";
    cin>>n;

    checkPrime(n);

    return 0;
}