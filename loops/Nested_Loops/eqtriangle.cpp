#include<iostream>
using namespace std;
//draw an upside down equilateral triangle
void Draw(int n)
{
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i<=j){
                cout<<"* ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
}


int main(){
    Draw(10);
}