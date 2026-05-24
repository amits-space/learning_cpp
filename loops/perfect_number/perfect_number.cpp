#include<iostream>
using namespace std;

//A perfect number is a number whose factors add up to twice itself
//for example: 6 is a perfect number because its factors are 1, 2, 3 and 6 and 1+2+3+6 = 12 = 2*6

int main(){
    int n;
    cout<<"Enter the number to be checked: ";
    cin>>n;

    int i, sum=0;
    for(i=n; i>0; i--){
        if(n%i==0){
            cout<<i<<"\n";
            sum+=i;
        }
    }
    cout<<"Sum of factors = "<<sum;

    if (sum==2*n){
        cout<<"The number is a perfect number";
    }
    else
        cout<<"\nThe number is not a perfect number";
}