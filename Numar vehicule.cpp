#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    long long int n,timp,senzor,rez,aux,aux2,aux1,aux3,aux4;
    long long int cnt=0;
    cin>>n;
    vector<pair<long long int,long long int>>dreapta;
    vector<pair<long long int,long long int>>stanga;
    
    for(long long int i=0;i<n;i++){
        cin>>timp>>senzor;
        stanga.push_back(make_pair(timp,senzor));
        
    }
    for(long long int i=0;i<n;i++){
        cin>>timp>>senzor;
        dreapta.push_back(make_pair(timp,senzor));
    }
    
 
    for(long long int i=0;i<stanga.size();i++){
        if(stanga[i].second==1){
            aux=stanga[i].first;
            break;
        }
    }
    for(long long int i=0;i<dreapta.size();i++){
        if(dreapta[i].second==1){
            aux2=dreapta[i].first;
            break;
        }
    }
    
    if(aux<aux2){
        aux1=1;
    }else{aux1=-1;}
    vector<long long int>saux;
    vector<long long int>daux;
    
    for(long long int i=0;i<stanga.size();i++){
        if(stanga[i].second==1){
            cnt++;
            for(long long int j=i;j<stanga.size();j++){
                if(stanga[j].second==0||j==stanga.size()-1){
                    saux.push_back((stanga[i].first/10)*10);
                    i=j;
                    break;
                }
            }
        }continue;
    }
    
    for(long long int i=0;i<dreapta.size();i++){
        if(dreapta[i].second==1){
            
            for(long long int j=i;j<dreapta.size();j++){
                if(dreapta[j].second==0||j==dreapta.size()-1){
                    daux.push_back((dreapta[i].first/10)*10);
                    i=j;
                    break;
                }
            }
        }continue;
    }
    
    vector<long double>rezz;
    
    for(int i=0;i<saux.size();i++){
        rezz.push_back(saux[i]-daux[i]);
        }
    
    int cv=1;
    long double final=0;
    for(long long int i=0;i<rezz.size();i++){
        if(rezz[i]!=0){
            rezz[i]=(7200/rezz[i]);
            final+=rezz[i];
        }else cv*=10;
    }
    if(cv!=1){
        final*=cv/10;
    }
    long double viteza;
    viteza=abs(final/rezz.size());
    
    for(long long int i=0;i<stanga.size();i++){
        if(stanga[i].second==1){
            aux3=stanga[i].first;
            
        }
    }
    for(long long int i=0;i<dreapta.size();i++){
        if(dreapta[i].second==1){
            aux4=dreapta[i].first;
            
        }
    }
    if(aux1==1){
        rez=aux4-aux3;
    }else{rez=aux3-aux4;}
    
    
    cout<<(int)viteza/2<<' '<<cnt;
}