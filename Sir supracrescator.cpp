#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<map>
using namespace std; 

int main(){
    int n,numere,acc=0,neacc=0,suma=0,nrtermeni=0,ok=0;
    vector<int>vec;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>numere;
        vec.push_back(numere);
        
    }
    vector<int>vec2;
    
    vec2=vec;
    
    for(int i=0;i<vec.size()-1;i++){
        suma+=vec[i];
        if(vec[i]<vec[i+1]&&suma<vec[i+1]){
            acc=1;
        }
        else if(suma>vec[i+1]){
            
            nrtermeni++;
            vec[i+1]=vec[i+1]+(suma-vec[i+1]);
            
        }
        else if(suma==vec[i+1]){
            
            nrtermeni++;
            vec[i+1]=vec[i+1]+1;
            
        }
       
      
       
    }cout<<nrtermeni<<endl;
      if(suma>=vec[n-1]){ok=1;}
      //cout<<suma<<" "<<vec[n-1]<<' '<<ok<<endl;
     suma=0;
     for(int i=0;i<vec2.size()-1;i++){
        suma+=vec2[i];
        //cout<<suma<<' '<<vec2[i+1]<<endl;
        if(vec2[i]<vec2[i+1]&&suma<vec2[i+1]){
            acc=1;
        }
        else if(suma>vec2[i+1]){
            cout<<i+2<<endl;
            //nrtermeni++;
            vec[i+1]=vec2[i+1]+(suma-vec2[i+1]);
            neacc++;
            acc=0;
        }
        else if(suma==vec2[i+1]){
            cout<<i+2<<endl;
            //nrtermeni++;
            vec2[i+1]=vec2[i+1]+1;
            neacc++;
           acc=0;
        }
        
    }
   
    
    if(nrtermeni<=2&&ok==0){cout<<"ACCEPT"<<endl;
    }
    else{cout<<"RESPINS"<<endl;}
    
    
}