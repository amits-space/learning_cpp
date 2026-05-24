#include <bits/stdc++.h>
using namespace std;

float discriminant(int a, int b, int c){
    float dis = ((b*b)-4*a*c);
    return dis;
}

int main(){
    int a, b, c;
    cout<<"Enter the coefficient of x^2:"<<endl;
    cin>>a;
    if(a==0){
        cout<<"This is not a quadratic equation"<<endl;
        return 0;
    }
    cout<<"Enter the coefficient of x^1:"<<endl;
    cin>>b;
    cout<<"Enter the coefficient of x^0:"<<endl;
    cin>>c;
    
    
    cout<<"Your equation is: "<<a<<"x^2";
    if(b>0){
        cout<<"+"<<b<<"x";
    }
    else if(b<0){
        cout<<b<<"x";
    }
    if (c>=0){
        cout<<"+"<<c;
    }
    else if (c<0) {
        cout<<c;
    }
    cout<<"=0\n";
    
    float d=discriminant(a, b, c);
    
    if(d==0){
        cout<<"The equation has real and equal roots"<<endl;
    }
    else if(d>0){
        cout<<"The equation has real and distinct roots"<<endl;
    }
    else if(d<0){
        cout<<"The equation has imaginary roots, please enter valid equation"<<endl;
        exit (0);
    }
    float root1 = (-b+sqrt(d))/(2*a);
    float root2 = (-b-sqrt(d))/(2*a);
    
    cout<<"The roots are: \nRoot 1 = "<<root1<<endl<<"Root 2 = "<<root2;
    return 0;
}