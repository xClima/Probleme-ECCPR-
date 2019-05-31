#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Film{
public:   string nume;
public:    int o,m,p;
    
    public:
    Film(int o_in,int m_in,int p_in,string nume_in){
        nume=nume_in;
        o=o_in;
        m=m_in;
        p=p_in;
    }
    
    
    
};

int main(){
    string nume_film,nume_film_out;
    char xx;
    int nr_filme,ora_sosire,minut_sosire,ore,minute,ora_out=24,minute_out=60000,pret,pret_out,scadere_ora=24,pret_o,scadere_minute=60;
    vector<Film>filme;
    cin>>ora_sosire>>xx>>minut_sosire;
    cin>>nr_filme;
    
    for(int i=0;i<nr_filme;i++){
        cin>>ore>>xx>>minute>>pret>>nume_film;
        filme.push_back(Film(ore,minute,pret,nume_film));
        
        
    }
    
    for(int i=0;i<filme.size();i++){
        
        if(filme[i].o>ora_sosire){
          if(filme[i].o-ora_sosire<scadere_ora){
              
             // cout<<minute_out<<' ';
              scadere_ora=filme[i].o-ora_sosire;
              minute_out=(filme[i].m+ (60*scadere_ora))-minut_sosire;
              nume_film_out=filme[i].nume;
              pret_o=filme[i].p;
          }else if(filme[i].o-ora_sosire==scadere_ora){
              
              
            
                if((filme[i].m+60*scadere_ora)-minut_sosire<minute_out){
                    
                    minute_out=(filme[i].m+60*scadere_ora)-minut_sosire;
                    nume_film_out=filme[i].nume;
                    
                
            }
            else if((filme[i].m+60*scadere_ora)-minut_sosire==minute_out){
                if(filme[i].p<pret_o){
                    pret_o=filme[i].p;
                    nume_film_out=filme[i].nume;
                }
            }
          }  
        }else
        if(filme[i].o==ora_sosire&&filme[i].m>=minut_sosire){
            scadere_ora=0;
            if(filme[i].m-minut_sosire<scadere_minute){
                      scadere_minute=filme[i].m-minut_sosire;
                      nume_film_out=filme[i].nume;
                      pret_out=filme[i].p;
                  }else if(filme[i].m-minut_sosire==scadere_minute){
                      if(pret_out>filme[i].p){
                          pret_out=filme[i].p;
                          nume_film_out=filme[i].nume;
                      }
                  }
            
        }
        
    }
    cout<<nume_film_out<<endl;
    
}