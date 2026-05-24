//Printing an array using a for-each loop

#include<iostream>
using namespace std;

int main(){
    int A[]={2,4,6,8,10,12,14,16,18,20};

    for (int x: A){
        cout<<x<<" ";
    }

    return 0;
}