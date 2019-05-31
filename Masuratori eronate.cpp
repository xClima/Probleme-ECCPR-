#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


int main(){
    int n,nr,cnt=0,e=0;
    double medie=1,deviatie=1,suma=0,suma2=0,diferenta=0;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
        
    }
    diferenta=vec[0];
    do{
    for(int i=0;i<vec.size();i++){
        suma+=vec[i];
        
    }
    
    medie=suma/vec.size();
    suma=0;
    for(int i=0;i<vec.size();i++){
        suma2+=(vec[i]-medie)*(vec[i]-medie);
        
    }
    
    deviatie=sqrt(suma2/vec.size());
    suma2=0;
    diferenta=abs(medie-vec[0]);
    
    for(int i=0;i<vec.size();i++){
        
        if ( abs ( medie - vec[i] ) > abs ( diferenta ) ){
        diferenta = abs(medie-vec[i]);
        e=i;
        }
        //cout<<diferenta<<' ';
    }
//cout<<endl;
    
    diferenta=abs(medie-vec[0]);
    
    if(deviatie/medie>0.1){
    cnt++;
    vec.erase(vec.begin()+e);
    }
    }while(deviatie/medie>0.1);
cout<<cnt;
}




