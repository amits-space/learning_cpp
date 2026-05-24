#include<bits/stdc++.h>
using namespace std;
int main(){
    int mark;
    string grade;
    cin>>mark;
    
    if(mark<25){
        grade = "F";
    }
    else if(mark>=25 && mark<=44){
        grade = "E";
    }
    
    else if(mark>44 && mark<=49){
        grade = "D";
    }
    
    else if(mark>49 && mark<=59){
        grade = "C";
    }
    
    else if(mark>59 && mark<=80){
        grade = "B";
    }
    
    else{
        grade = "A";
    }
    
    cout<<"Your grade is: "<<grade;
    return 0;
}