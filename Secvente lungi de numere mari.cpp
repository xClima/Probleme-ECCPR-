#include<iostream>
#include<vector>

using namespace std;

int main(){
    double n,nr,prag;
    cin>>n;
    vector<double>numere;
    for(int i=0;i<n;i++){
        cin>>nr;
        numere.push_back(nr);
    }
    cin>>prag;
    for(int i=0;i<numere.size();i++){
        if(numere[i]>prag){
            numere[i]=1;
        }else{numere[i]=0;}
        //cout<<numere[i]<<' ';
    }
    int cnt=0;
    int aux=0;
    
    for(int i=0;i<numere.size();i++){
        if(numere[i]==1){
            aux++;
            
        }if(aux>0&&numere[i]==0){
            cnt++;
            aux=0;
        }
    }
    if(aux>0){
        cnt+=1;
    }
    
    cout<<cnt;
}