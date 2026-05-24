#include<bits/stdc++.h>
using namespace std;

void checkLeap(int year){
    if (year%4==0){
        if(year%100==0){
            if(year%400==0)
                cout<<"The year "<<year<<" is a leap year"<<endl;
            else
                cout<<"The year "<<year<<" is NOT a leap year"<<endl;
        }
        else
            cout<<"The year "<<year<<" is a leap year"<<endl;
    }
}

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    checkLeap(year);
}