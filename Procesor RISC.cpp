#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n,val,reg,rez,unu,doi,valoare1,valoare2,verific=1;
    string in;
    vector<pair<int,int>>vec;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>in;
        if(in=="lconst"&&vec.size()>0){
            cin>>reg>>val;
                for(int j=0;j<vec.size();j++){
                    if(vec[j].first==reg){
                        vec[j].second=val;
                        verific=0;
                    }
                }
                if(verific!=0){
                    vec.push_back(make_pair(reg,val));
                }
           
        }else if(in=="lconst"&&vec.size()==0){
             
            cin>>reg>>val;
            vec.push_back(make_pair(reg,val));}
        
        else if(in=="add"){
            cin>>reg>>unu>>doi;
            
            for(int j=0;j<vec.size();j++){
            if(vec[j].first==unu){
                valoare1=vec[j].second;
            }
            if(vec[j].first==doi){
                valoare2=vec[j].second;
            }
            
            
            }
            rez=valoare1+valoare2;
            
            for(int j=0;j<vec.size();j++){
                    if(vec[j].first==reg){
                        vec[j].second=rez;
                        verific=0;
                    }
                }
                if(verific!=0){
                    vec.push_back(make_pair(reg,rez));
                }
            
        }else if(in=="mul"){
            
            cin>>reg>>unu>>doi;
            
            for(int j=0;j<vec.size();j++){
            if(vec[j].first==unu){
                valoare1=vec[j].second;
            }
            if(vec[j].first==doi){
                valoare2=vec[j].second;
            }
            
            
            }
            rez=valoare1*valoare2;
             for(int j=0;j<vec.size();j++){
                    if(vec[j].first==reg){
                        vec[j].second=rez;
                        verific=0;
                    }
                }
                if(verific!=0){
                    vec.push_back(make_pair(reg,rez));
                }
            
        }
            
        else if(in=="div"){
            cin>>reg>>unu>>doi;
           
            for(int j=0;j<vec.size();j++){
            if(vec[j].first==unu){
                valoare1=vec[j].second;
            }
            if(vec[j].first==doi){
                valoare2=vec[j].second;
            }
            
            
            }
            if(valoare2!=0){
            rez=valoare1/valoare2;
            
            for(int j=0;j<vec.size();j++){
                    if(vec[j].first==reg){
                        vec[j].second=rez;
                        verific=0;
                    }
                }
                if(verific!=0){
                    vec.push_back(make_pair(reg,rez));
                }
            
            }else{cout<<"Exception: line "<<i+1;
            break;
        }
        }else if(in=="print"){
            cin>>reg;
            for(int j=0;j<vec.size();j++){
                if(vec[j].first==reg){
                    cout<<vec[j].second<<endl;
                }
            }
        }
        verific=1;
        
    }
    
    
}