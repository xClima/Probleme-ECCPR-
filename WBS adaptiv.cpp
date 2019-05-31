#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int nrbiti,nrcodare,aux;
    char biti;
    int cnt=0;
    int counterbiti=0;
    vector<char>vec;
    vector<char>vec2;
    vector<char>alt;
    vector<char>unu;
    alt.push_back('0');
    unu.push_back('1');
    cin>>nrbiti>>nrcodare;
    
    for(int i=0;i<nrbiti;i++){
        cin>>biti;
        vec.push_back(biti);
        vec2.push_back(biti);
        counterbiti++;
    }
    aux=nrcodare;
   int cntunu=0;
    while(vec.size()>=nrcodare){
        for(int i=0;i<aux;i++){
        
            if(vec[i]=='0'){
            cnt++;
            }
            if(vec[i]=='1'){
                cntunu++;
            }
        
        }
        if(cnt==nrcodare){alt.push_back('0');
            
        }else{
        alt.push_back('1');
            for(int i=0;i<aux;i++){
            
            alt.push_back(vec[i]);}}
            
            if(cntunu==nrcodare){unu.push_back('1');
            
        }else{ 
        unu.push_back('0');
            for(int i=0;i<aux;i++){
           
            unu.push_back(vec[i]);}}
            cnt=0;
            cntunu=0;
            std::vector<char>(vec.begin()+aux, vec.end()).swap(vec);
    
}

if(!vec.empty()){
    alt.push_back('1');
    unu.push_back('0');
            for(int i=0;i<vec.size();i++){
            unu.push_back(vec[i]);
            alt.push_back(vec[i]);}
    
}
float x,y,z,rezultatunu,rezultatzero;
x=alt.size();
z=unu.size();
y=counterbiti;
rezultatunu=y/z;
rezultatzero=y/x;

//cout<<alt.size()<<' '<<unu.size()<<endl;
if(rezultatzero>=rezultatunu){
    cout<<fixed<<setprecision(2)<<y/x<<endl;
     for(int i=0;i<alt.size();i++){
        cout<<alt[i]<<endl;
    }
}else{cout<<fixed<<setprecision(2)<<y/z<<endl;
     for(int i=0;i<unu.size();i++){
        cout<<unu[i]<<endl;
    }
}
    
   
}