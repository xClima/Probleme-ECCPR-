#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int aux,partide,stat,nr,max=0,ok=0;string nume_max;
    string nume_partid;
    cin>>partide>>stat;
    vector<string>asc;
    vector<int>numere;
    
    for(int i=0;i<partide;i++){
        cin>>nume_partid;
        for(int j=0;j<stat;j++){
            cin>>nr;
            numere.push_back(nr);
            
            
        }
        for(int x=0;x<numere.size()-1;x++){
            if(numere[x]>numere[x+1]){
                ok++;
        }
        }
        if(ok==0){
            asc.push_back(nume_partid);
        }
        ok=0;
            aux=numere[stat-1]-numere[0];
            //cout<<nume_partid<<' '<<aux<<' '<<max<<' '<<nume_max<<endl;
        if(max<aux){
            max=aux;
            nume_max=nume_partid;
        }
        aux=0;
        numere.clear();
    }if(asc.size()>0){
    for(int i=0;i<asc.size();i++){
        cout<<asc[i]<<' ';
    }}else{cout<<"Nu exista";}
    cout<<endl;
    cout<<nume_max<<' '<<max<<"%";
}