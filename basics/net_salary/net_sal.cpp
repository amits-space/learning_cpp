#include<iostream>
using namespace std;

int main(){
    
    //declaration of the variables
    
    float basic_sal, allowance, deduction;
    cout<<"Enter basic salary"<<endl;
    cin>>basic_sal;
    cout<<"Enter the percentage of allowance and deductions"<<endl;
    cin>>allowance>>deduction;
    
    //conveting percentages to raw numbers
    
    allowance=basic_sal*allowance/100;
    deduction=basic_sal*deduction/100;

    //calculation of the net salary

    float net_sal=basic_sal+allowance-deduction;
    cout<<"Net salary: $"<<net_sal;


    return 0;

}