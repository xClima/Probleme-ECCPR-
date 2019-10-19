#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int n,k;
    int R=0,S=0,P=0,H=0,B=0;
    double suma=0;
    char X;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>X;
            if(X=='R'){
                R++;
            }
            if(X=='S'){
                S++;
            }
            if(X=='P'){
                P++;
            }
            if(X=='H'){
                H++;
            }
            if(X=='B'){
                B++;
            }
        }
        if(R<1||S<1||P<1||H<1||B<1){
            suma++;
            cout<<"0 ";
        }else if(R%4!=0){
            suma++;
            cout<<"0 ";
        }else if(S!=P){
            suma++;
            cout<<"0 ";
        }else if((B%2!=0)||(H%2!=0)||(H>P)){
            suma++;
            cout<<"0 ";
        }else{
            cout<<"1 ";
        }
        R=0;S=0;P=0;H=0;B=0;
    }
    if(suma!=0){
        cout<<endl<<fixed<<setprecision(2)<<(double)(suma/n);
    }else{
        cout<<endl<<"0.00";
    }
}