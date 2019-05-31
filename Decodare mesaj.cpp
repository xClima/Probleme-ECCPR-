#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<char>mesaj;
    int x;
    char cuvant;
    
    while(cin>>cuvant)
    {
        mesaj.push_back(cuvant);
    }
    
    while(!mesaj.empty()){
        
            
    if(mesaj[0]=='0'&&mesaj[1]=='0'){cout<<' ';
        mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());
        x=1;
        
    }else
    if(mesaj[0]=='0'&&mesaj[1]=='1'){cout<<'A';
        mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());
      
    }else
    if(mesaj[0]=='0'&&mesaj[1]=='2'){cout<<'B';
    mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());
        x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='0'){cout<<"J";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='1'){cout<<"K";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='2'){cout<<"L";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='3'){cout<<"M";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='4'){cout<<"N";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='5'){cout<<"O";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='6'){cout<<"P";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='7'){cout<<"Q";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='8'){cout<<"R";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='1'&&mesaj[1]=='9'){cout<<"S";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='0'){cout<<"T";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='1'){cout<<"U";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='2'){cout<<"V";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='3'){cout<<"W";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='4'){cout<<"X";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='5'){cout<<"Y";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
    if(mesaj[0]=='2'&&mesaj[1]=='6'){cout<<"Z";mesaj.erase(mesaj.begin());
        mesaj.erase(mesaj.begin());x=1;
        }else
        
        
        if(mesaj[0]=='3'){cout<<"C";mesaj.erase(mesaj.begin());x=1;
        
        }else
    if(mesaj[0]=='4'){cout<<"D";mesaj.erase(mesaj.begin());x=1;
        
        }else
    if(mesaj[0]=='5'){cout<<"E";mesaj.erase(mesaj.begin());x=1;
        
        }else
    if(mesaj[0]=='6'){cout<<"F";mesaj.erase(mesaj.begin());x=1;
        
        }else
    if(mesaj[0]=='7'){cout<<"G";mesaj.erase(mesaj.begin());x=1;
        
        }else
    if(mesaj[0]=='8'){cout<<"H";mesaj.erase(mesaj.begin());x=1;
        
        }else
    if(mesaj[0]=='9'){cout<<"I";mesaj.erase(mesaj.begin());x=1;
        
    }else
        
        
        if((mesaj[0]=='0'&&mesaj[1]=='3')){cout<<"C";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        }else
    if((mesaj[0]=='0'&&mesaj[1]=='4')){cout<<"D";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        }else
    if((mesaj[0]=='0'&&mesaj[1]=='5')){cout<<"E";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        }else
    if((mesaj[0]=='0'&&mesaj[1]=='6')){cout<<"F";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        }else
    if((mesaj[0]=='0'&&mesaj[1]=='7')){cout<<"G";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        }else
    if((mesaj[0]=='0'&&mesaj[1]=='8')){cout<<"H";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        }else
    if((mesaj[0]=='0'&&mesaj[1]=='9')){cout<<"I";mesaj.erase(mesaj.begin());mesaj.erase(mesaj.begin());x=1;
        
        
            
     
        
        }else
        if(mesaj[0]=='2'&&(mesaj[1]=='9'||mesaj[1]=='8'||mesaj[1]=='7')){
            cout<<"B";mesaj.erase(mesaj.begin());
        } 
        if(mesaj.size()==1){
          if(mesaj[0]=='1'){cout<<"A";mesaj.erase(mesaj.begin());}}
        
            
     
        
        }
       
       
    }
    