#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    //code to input radius
    float radius;
    cout<<"Enter the radius of the circle "<<endl;
    cin>>radius;

    //declaration of pi and area
    float pi=3.14;
    float area = pow(radius, 2)*pi;

    //printing the output
    cout<<"The area of the circle = "<<area;

    return 0;
}