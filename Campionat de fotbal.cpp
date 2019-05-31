#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

class Clasament{
    public:
    string tara;
    int puncte,goluri_date,goluri_primite;
    Clasament(string tara_in,int puncte_in,int goluri_date_int,int goluri_primite_in){
        tara=tara_in;
        goluri_date=goluri_date_int;
        goluri_primite=goluri_primite_in;
        puncte=puncte_in;
    }
};
class Clasament_final{
    public:
    string tara;
    int puncte,goluri_date,goluri_primite;
    Clasament_final(string tara_in,int puncte_in,int goluri_date_int,int goluri_primite_in){
        tara=tara_in;
        goluri_date=goluri_date_int;
        goluri_primite=goluri_primite_in;
        puncte=puncte_in;
    }
    


};

bool operator<(const Clasament &s1, const Clasament &s2){
    return s1.puncte > s2.puncte;
}


int main(){
    string tara1,tara2;
    int gol1,gol2,puncte1=0,puncte2=0,echipe,meciuri,ok1=0,ok2=0,index1,index2;
    char junk;
    vector<Clasament>vec;
    vector<Clasament_final>out;
    cin>>echipe>>meciuri;
    for(int i=0;i<meciuri;i++){
    cin>>tara1>>gol1>>junk>>gol2>>tara2;
        ok1=0;ok2=0;
        if(gol1>gol2){
            puncte1=3;
            puncte2=0;
        }
        if(gol2>gol1){
            puncte2=3;
            puncte1=0;
        }
        if(gol2==gol1){
            puncte1=1;
            puncte2=1;
        }
        
        for(int i=0;i<vec.size();i++){
                if(vec[i].tara==tara1){
                    ok1=1;
                    index1=i;
                }
            }
            for(int i=0;i<vec.size();i++){
                if(vec[i].tara==tara2){
                    ok2=1;
                    index2=i;
                }
            }
        
        if(vec.size()<2){
        vec.push_back(Clasament(tara1,puncte1,gol1,gol2));
        vec.push_back(Clasament(tara2,puncte2,gol2,gol1));
        }else{
            
        if(ok1==1&&ok2==1){
            vec[index1].puncte+=puncte1;
            vec[index1].goluri_date+=gol1;
            vec[index1].goluri_primite+=gol2;
            vec[index2].puncte+=puncte2;
            vec[index2].goluri_date+=gol2;
            vec[index2].goluri_primite+=gol1;
        
        }else
        if(ok1==1&&ok2==0){
            vec[index1].puncte+=puncte1;
            vec[index1].goluri_date+=gol1;
            vec[index1].goluri_primite+=gol2;
            vec.push_back(Clasament(tara2,puncte2,gol2,gol1));
        }else
        if(ok1==0&&ok2==1){
            vec[index2].puncte+=puncte2;
            vec[index2].goluri_date+=gol2;
            vec[index2].goluri_primite+=gol1;
            vec.push_back(Clasament(tara1,puncte1,gol1,gol2));
        }else 
        if(ok1==0&&ok2==0){
            vec.push_back(Clasament(tara1,puncte1,gol1,gol2));
            vec.push_back(Clasament(tara2,puncte2,gol2,gol1));
        }
        
        }
        
        
        
        
    }
    
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].tara<<' '<<vec[i].puncte<<' '<<vec[i].goluri_date<<' '<<vec[i].goluri_primite<<endl;
        
    }
}