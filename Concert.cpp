#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    
    double n,Pb,Cm;
    int lunai,lunas,zii,zis;
    string nume;
    int luna,zi;
    double pret,distanta;
    string bnume;
    double total=0,out=99999;
    
    cin>>n>>Pb>>Cm;
    cin>>zii>>lunai>>zis>>lunas;
    for(int i=0;i<n;i++){
        cin>>nume>>zi>>luna>>pret>>distanta;
        if((luna>lunas||luna<lunai)||((luna==lunas&&zi>zis)||(luna==lunai&&zi<zii))){
            total=pret+(distanta*Cm*2*Pb)/3;
            if(total<out){
                bnume=nume;
                out=total;
            }
        }
    }
    cout<<bnume<<' '<<fixed<<setprecision(2)<<out;
}