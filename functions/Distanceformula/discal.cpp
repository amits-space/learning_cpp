#include<bits/stdc++.h>
using namespace std;
float distance (int x1, int x2, int y1, int y2){
    double dis= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dis;
}

int main(){
    cout<<"Distace calculator by using the coordinates of two points:-\n";
    int x1, x2, y1, y2;
    cout<<"Enter the x and y coordinates of the first point:\n";
    cin>>x1>>y1;
    cout<<"Enter the x and y coordinates of the second point:\n";
    cin>>x2>>y2;

    double dis= distance(x1, x2, y1, y2);
    cout<<"Your points are A("<<x1<<","<<y1<<") and B("<<x2<<","<<y2<<")"<<endl;

    cout<<"The distance between the points is: "<<dis;
}