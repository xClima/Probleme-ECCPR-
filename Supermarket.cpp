#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

class Produs{
    public:
    string cod;
    char x;
    double numar;
public: Produs(string cod_in,char x_in,double numar_in){
        cod=cod_in;
        x=x_in;
        numar=numar_in;
    }
};

int main()
{

    int n,k;
    string cod_prod;
    char x_prod;
    double numar_prod;
    vector<Produs>vec;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>cod_prod>>x_prod>>numar_prod;
        vec.push_back(Produs(cod_prod,x_prod,numar_prod));
    }
    vector<string>cod;
    for(int i=0;i<k;i++){
        cin>>cod_prod;
        cod.push_back(cod_prod);
    }
    
    double suma=0;
    double reducere=0;
    for(int i=0;i<cod.size();i++){
        for(int j=0;j<vec.size();j++){
            if(cod[i]==vec[j].cod){
                if(vec[j].x=='p'){
                    suma+=vec[j].numar;
                }else
                if(vec[j].x=='c'){
                    reducere+=vec[j].numar;
                }
            }
            
        }
    }
    suma-=((reducere*suma)/100);
    cout<<suma;
}