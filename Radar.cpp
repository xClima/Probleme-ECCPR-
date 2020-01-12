#include <iostream>
#include <vector>

using namespace std;

class Obiect{
    public:
    double distanta, masa, unghi, viteza, energie;
    static int pericol;
    static int lovire;
    static int asteroid;
    static int cometa;
    static int neidentificat;
    static int asteroid_loveste;
    static int cometa_loveste;
    static int neidentificat_loveste;
    static int asteroid_pericol;
    static int cometa_pericol;
    static int neidentificat_pericol;
    const double raza = 6371;
    Obiect (double distanta, double masa, double unghi, double viteza){
        this->distanta=distanta;
        this->masa=masa;
        this->unghi=unghi;
        this->viteza=viteza;
        this->energie=(masa*viteza*viteza)/2;
        if((raza+distanta)*unghi<=raza){
            lovire++;
            if(energie>=20000000000)pericol++;
            if(masa>=2000&&viteza<=100){
                asteroid_loveste++;
                if(energie>=20000000000)asteroid_pericol++;
            }
            else if(masa<2000&&viteza>=150){
                cometa_loveste++;
                if(energie>=20000000000)cometa_pericol++;
            }
            else{
                neidentificat_loveste++;
                if(energie>=20000000000)neidentificat_pericol++;
            }
        }
        if(masa>=2000&&viteza<=100) asteroid++;
        else if(masa<2000&&viteza>=150) cometa++;
        else neidentificat++;
    }
};
    int Obiect::asteroid=0;
    int Obiect::cometa=0;
    int Obiect::neidentificat=0;
    int Obiect::pericol=0;
    int Obiect::lovire=0;
    int Obiect::asteroid_loveste=0;
    int Obiect::cometa_loveste=0;
    int Obiect::neidentificat_loveste=0;
    int Obiect::asteroid_pericol=0;
    int Obiect::cometa_pericol=0;
    int Obiect::neidentificat_pericol=0;

int main(){
    int n;
    vector<Obiect>vec;
    double distanta, masa, unghi, viteza;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>distanta>>masa>>unghi>>viteza;
        vec.push_back(Obiect(distanta, masa, unghi, viteza));
    }
    
    cout<<Obiect::lovire<<' '<<Obiect::pericol<<endl
    <<Obiect::asteroid<<' '<<Obiect::cometa<<' '<<Obiect::neidentificat<<endl
    <<Obiect::asteroid_loveste<<' '<<Obiect::cometa_loveste<<' '<<Obiect::neidentificat_loveste<<endl
    <<Obiect::asteroid_pericol<<' '<<Obiect::cometa_pericol<<' '<<Obiect::neidentificat_pericol<<endl;
    
    
}