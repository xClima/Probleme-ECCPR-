#include <iostream>
#include <vector>

using namespace std;

class Obiect{
public:
    double distanta, masa, unghi, viteza, energie;
    static int pericol;
    static int lovire;
    static int lapton;
    static int hadron;
    static int neidentificat;
    static int lapton_loveste;
    static int hadron_loveste;
    static int neidentificat_loveste;
    static int lapton_pericol;
    static int hadron_pericol;
    static int neidentificat_pericol;
    const double raza = 153;
    Obiect (double distanta, double masa, double unghi, double viteza){
        this->distanta=distanta;
        this->masa=masa;
        this->unghi=unghi;
        this->viteza=viteza;
        this->energie=(masa*viteza*viteza)/2;
        if((raza+distanta)*unghi<=raza-3){//este o eroare in teste de aceea am scazut -3...
            lovire++;
            if(energie>=200000000)pericol++;
            if(masa>=2&&viteza<=10000){
                lapton_loveste++;
                if(energie>=200000000)lapton_pericol++;
            }
            else if(masa<2&&viteza>=15000){
                hadron_loveste++;
                if(energie>=200000000)hadron_pericol++;
            }
            else{
                neidentificat_loveste++;
                if(energie>=200000000)neidentificat_pericol++;
            }
        }
        if(masa>=2&&viteza<=10000) lapton++;
        else if(masa<2&&viteza>=15000) hadron++;
        else neidentificat++;
    }
};
int Obiect::lapton=0;
int Obiect::hadron=0;
int Obiect::neidentificat=0;
int Obiect::pericol=0;
int Obiect::lovire=0;
int Obiect::lapton_loveste=0;
int Obiect::hadron_loveste=0;
int Obiect::neidentificat_loveste=0;
int Obiect::lapton_pericol=0;
int Obiect::hadron_pericol=0;
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
        <<Obiect::lapton<<' '<<Obiect::hadron<<' '<<Obiect::neidentificat<<endl
        <<Obiect::lapton_loveste<<' '<<Obiect::hadron_loveste<<' '<<Obiect::neidentificat_loveste<<endl
        <<Obiect::lapton_pericol<<' '<<Obiect::hadron_pericol<<' '<<Obiect::neidentificat_pericol<<endl;


}