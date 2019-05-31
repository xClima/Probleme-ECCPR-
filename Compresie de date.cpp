//este foarte ambigua rezolvarea mea...
#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
     std::string::size_type sz; 
     string virgula=",";
    string linie,new_linie;
    int nr_linii,nr_curent,nr_anterior,zero=0,aux=0,aux2=0;
    cin>>nr_linii;
    nr_linii++;
   do{
        getline(cin,linie);
        reverse(linie.begin(),linie.end());
        while(linie.size()!=0){
        int nr_zero=count(linie.begin(),linie.end(),'0');
            if(isdigit(linie[0])){
                if(!isdigit(linie[1])){
            nr_curent=stoi(linie);}
            else{nr_curent=stoi(linie,&sz);
                linie.erase(linie.begin());
                //cout<<nr_curent<<endl;
                //linie.erase(linie.begin());
            }
            if(nr_curent==0){
                zero++;
                linie.erase(linie.begin());
            }else{
                if(zero>0){//cout<<nr_curent<<endl;
                new_linie+=")";new_linie+=to_string(zero);new_linie+= ",";new_linie+= to_string(nr_curent)+"(";
                zero=0;
                }
                    else{
                        if(aux==0){
                        new_linie+=to_string(nr_curent);new_linie+=",";
                            aux2++;
                        }else{
                            //if(aux2==0){
                            new_linie+=","; new_linie+=to_string(nr_curent);}//else{new_linie+=to_string(nr_curent);}}
                    }
                linie.erase(linie.begin());
            }
            //cout<<nr_anterior;
            
             
            }else{linie.erase(linie.begin());}
            aux++;
        }
        //new_linie.erase(new_linie.begin());
        reverse(new_linie.begin(),new_linie.end());
        if(new_linie.size()>1){
            for(int i=0;i<new_linie.size();i++){
                if(new_linie[i]==','&&new_linie[i+1]==','){
                    new_linie.erase(new_linie.begin()+i);
                }
                if(new_linie[i]==')'&&new_linie[i+1]=='('){
                    new_linie.insert(i+1,virgula);
                }
                
            }
        cout<<new_linie<<endl;}
        new_linie.clear();
        nr_linii--;
        aux=0;
        aux2=0;
    }while(nr_linii!=0);
}