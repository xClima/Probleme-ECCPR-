#include<iostream>
#include<vector>

using namespace std;

int main(){
    long int n,timp,senzor,rez,aux,aux2,aux1,aux3,aux4;
    int cnt=0;
    cin>>n;
    vector<pair<int,int>>dreapta;
    vector<pair<int,int>>stanga;
    
    for(int i=0;i<n;i++){
        cin>>timp>>senzor;
        stanga.push_back(make_pair(timp,senzor));
        //cout<<stanga[i].first<<' ';
        
    }
    for(int i=0;i<n;i++){
        cin>>timp>>senzor;
        dreapta.push_back(make_pair(timp,senzor));
        //cout<<dreapta[i].first<<' ';
    }
    
 
    for(int i=0;i<stanga.size();i++){
        if(stanga[i].second==1){
            aux=stanga[i].first;
            break;
        }
    }
    for(int i=0;i<dreapta.size();i++){
        if(dreapta[i].second==1){
            aux2=dreapta[i].first;
            break;
        }
    }
    
    if(aux<aux2){
        aux1=1;
    }else{aux1=-1;}
    vector<int>saux;
    vector<int>daux;
    
    for(int i=0;i<stanga.size();i++){
        if(stanga[i].second==1){
            cnt++;
            for(int j=i;j<stanga.size();j++){
                if(stanga[j].second==0||j==stanga.size()-1){
                    saux.push_back((stanga[i].first/10)*10);
                    i=j;
                    break;
                }
            }
        }continue;
    }
    
    for(int i=0;i<dreapta.size();i++){
        if(dreapta[i].second==1){
            
            for(int j=i;j<dreapta.size();j++){
                if(dreapta[j].second==0||j==dreapta.size()-1){
                    daux.push_back((dreapta[i].first/10)*10);
                    i=j;
                    break;
                }
            }
        }continue;
    }
    
    vector<double>rezz;
    
    for(int i=0;i<saux.size();i++){
        rezz.push_back(saux[i]-daux[i]);
        //cout<<rezz[i]<<' '<<saux[i]<<' '<<daux[i]<<' ';
        }
    
    
    double final=0;
    
    for(int i=0;i<rezz.size();i++){
        rezz[i]=(2/rezz[i])*3600;
        final+=rezz[i];
    }
    
    int viteza;
    viteza=final/rezz.size()*(-1);
    
    
    for(int i=0;i<stanga.size();i++){
        if(stanga[i].second==1){
            aux3=stanga[i].first;
            
        }
    }
    for(int i=0;i<dreapta.size();i++){
        if(dreapta[i].second==1){
            aux4=dreapta[i].first;
            
        }
    }
    if(aux1==1){
        rez=aux4-aux3;
    }else{rez=aux3-aux4;}
    
    
    cout<<viteza<<' '<<cnt;
}