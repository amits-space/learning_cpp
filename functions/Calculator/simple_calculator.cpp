/*This is a code for a simple calculator that I built using a 
void function, a do-while loop and a switch case statement*/





#include<bits/stdc++.h>
using namespace std;

void inputFn(int &a, int &b){
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
}
int main(){
    int choice;
    do{
        cout<<"This is a program for a simple calculator\n";
        int x, y;
        cout<<"Please enter the choice for calculator\n";
        cout<<"1: addition\n2: Subtraction\n3: Multiplication\n4: Division\n5.Exit the calculator\n";
        cin>>choice;
    
        float res;
        switch(choice){
            case 1:
                cout<<"Your choice is addition\n";
                inputFn(x,y);
                res=x+y;
                break;
            case 2: 
                cout<<"Your choice is subtraction\n";
                inputFn(x,y);
                res=x-y;
                break;
            case 3: 
                cout<<"Your choice is Multiplication\n";
                inputFn(x,y);
                res=x*y;
                break;
            case 4: 
                    cout<<"Your choice is Division\n";
                    inputFn(x,y);
                    if(y==0){
                        cout<<"Division by zero is not possible\n";
                        continue;
                    }
                    else{
                        res=x/y;
                        break;
                    }
                
            case 5: cout<<"Exiting the calculator!";
                    break;
            default: cout<<"Invalid choice";
                        exit(0);
        }
    
        if(choice!=5){
            cout<<"Result= "<<res<<endl;
        }
    }while(choice!=5);
    
    return 0;
}