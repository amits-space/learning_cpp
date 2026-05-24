#include<bits/stdc++.h>
using namespace std;

void inputStr(string &in){
    cout<<"Enter the string: ";
    cin>>in;
}

int main(){
    string in;
    inputStr(in);

    int n= in.length();
    string newStr(n, ' ');

    for (int i=0; i<n; i++){
        newStr[i]=in[n-1-i];
    }

    cout<<"The reversed string is: "<<newStr;
    return 0;
}