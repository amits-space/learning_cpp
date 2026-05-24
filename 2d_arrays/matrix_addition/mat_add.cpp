//program to implement addition of two matrices using 2d arrays

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the dimensions of the matrix:\nm=";
    cin>>m;
    cout<<"n= ";
    cin>>n;

    int A[m][n], B[m][n], i, j;

    cout<<"Enter the elements in matrix A:\n";
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<"A["<<i<<","<<j<<"]: ";
            cin>>A[i][j];
        }
    }


    cout<<"Enter the elements in matrix B:\n";
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<"B["<<i<<","<<j<<"]: ";
            cin>>B[i][j];
        }
    }

    int sum[m][n];

    for (i=0; i<m; i++){
        for(j=0; j<n; j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"Sum of the matrices is:\n";
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}