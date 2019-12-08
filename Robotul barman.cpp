#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,nr,m,vandut=0,aprov=0;
    cin>>n;
    vector<int>vec;
    vector<int>com;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    cin>>m;
    bool verif_com=true,verif_aprov=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>nr;
            com.push_back(nr);
            if(nr!=0) verif_aprov=false;
            if(vec[j]-nr<0) verif_com=false;
        }
        if(verif_aprov==true){
            for(int j=0;j<vec.size();j++){
                vec[j]+=15;
            }
            aprov++;
        }
        if(verif_com==true&&verif_aprov==false){
            for(int j=0;j<vec.size();j++){
                vec[j]-=com[j];
            }
            vandut++;
        }
        verif_aprov=true;
        verif_com=true;
        com.clear();
    }
    cout<<vandut<<endl<<aprov;
}