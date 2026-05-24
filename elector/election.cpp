#include<bits/stdc++.h>
using namespace std;
int main(){
    int PartyA=0, PartyB=0, NOTA=0;
    cout<<"Simple 2 party election simulator\n";
    int n, i, ch;
    cout<<"Enter the number of participating voters: ";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"\nENTER\n1 for PARTY A\n2 for PARTY B\n 3 for NONE OF THE ABOVE\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        if(ch==1){
            PartyA++;
        }
        else if(ch==2){
            PartyB++;
        }
        else if(ch==3){
            NOTA++;
        }
        else{
            cout<<"Enter Valid Choice\n";
            n++;
        }

    }
    
    if(PartyA>PartyB){
        if(PartyA>NOTA)
            cout<<"Winner is Party A";
        else
            cout<<"Winner is NOTA";
    }
    else if(PartyB>PartyA){
        if (PartyB>NOTA)
            cout<<"Winner is Party B";
        else
            cout<<"Winner is NOTA";
    }
    return 0;
}