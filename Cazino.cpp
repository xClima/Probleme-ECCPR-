#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Carte{
    public:
    int numar;
    string culoare;
    public:
    Carte(){}
    Carte(int nr,string clr){
        culoare=clr;
        numar=nr;
    }
};
int main(){
    vector<Carte>carti;
    string culoare_citita;
    int carte_citita;
    int nr_carti;
    int x=0;
    
    cin>>nr_carti;
    for(int i=0;i<nr_carti;i++){
        cin>>carte_citita>>culoare_citita;
        carti.push_back(Carte(carte_citita,culoare_citita));
        
        x=0;
        for(int j=0;j<carti.size();j++){
            if((carte_citita==carti[j].numar)&&(culoare_citita==carti[j].culoare)){
                x++;
            }
        }
    
    if(x>=3){
        cout<<carte_citita<<" "<<culoare_citita;
        return 0;
    }
}
cout<<"JOC OK";
}