#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
    std::string::size_type sz;
    string aux,alt;
    int n,zero=0,nr_aux=0,nr;
    string linie,new_linie;
    cin>>n;
    n=n+1;
    while(n!=0){
        getline(cin,linie);
        
        while(linie.size()!=0){
            if(isdigit(linie[0])&&nr_aux==0){
                new_linie+=linie[0];
                linie.erase(linie.begin());
            }else if(linie[0]==','&&nr_aux==0){
                new_linie+=linie[0];
                linie.erase(linie.begin());
            }else if(linie[0]=='('){
                linie.erase(linie.begin());
                nr_aux++;
            }else if(linie[0]==')'){
                for(int i=0;i<zero;i++){
                    new_linie+='0';
                    new_linie+=',';
                }
                zero=0;
                linie.erase(linie.begin());
                nr_aux=0;
            }else if(isdigit(linie[0])&&nr_aux>0){
                if(!isdigit(linie[1])){
                    new_linie+=linie[0];
                    new_linie+=',';
                    
                    linie.erase(linie.begin());
                    linie.erase(linie.begin());
                    if(isdigit(linie[1])){
                    zero=stoi(linie,&sz);
                      linie.erase(linie.begin());  
                    }else{zero=stoi(linie);}
                    //cout<<zero;
                    linie.erase(linie.begin());
                }else if(isdigit(linie[1])){
                   // nr=stoi(linie,&sz);
                    new_linie+=linie[0];
                    new_linie+=linie[1];
                    new_linie+=',';
                    linie.erase(linie.begin());
                    linie.erase(linie.begin());
                    linie.erase(linie.begin());
                    if(isdigit(linie[1])){
                    zero=stoi(linie,&sz);
                      linie.erase(linie.begin());  
                    }else{zero=stoi(linie);}
                    //cout<< zero;
                    linie.erase(linie.begin());
                }
            }
            
            
            
        }
        if(new_linie.size()>0){
            for(int i=0;i<new_linie.size()-1;i++){
                if(new_linie[i]==','&&new_linie[i+1]==','){
                    new_linie.erase(new_linie.begin()+i+1);
                }
            }
            if(new_linie[new_linie.size()-1]==','){
                new_linie.erase(new_linie.begin()+new_linie.size()-1);
            }
        cout<<new_linie<<endl;}
        new_linie.clear();
        
        
        n--;
    }
    

}