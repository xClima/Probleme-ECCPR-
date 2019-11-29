#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n,nr,cnt=0,max=0,index,suma,suma_max=0;
    string s1,s2,s;
    vector<string>aux;
    vector<pair<pair<string,string>,int>>vec;
    vector<string>out;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1>>s2>>nr;
        vec.push_back(make_pair(make_pair(s1,s2),nr));
    }
    bool verif=true;
    for(int j=0;j<vec.size();j++){
        s=vec[j].first.second;
        suma=vec[j].second;
        aux.push_back(vec[j].first.first);
        verif=true;
        while(verif==true){
            for(int i=0;i<vec.size();i++){
                if(s==vec[i].first.first){
                    if(suma>vec[i].second){
                        suma=vec[i].second;
                    }
                    aux.push_back(vec[i].first.first);
                    s=vec[i].first.second;
                    verif=true;
                    break;
                }else{
                    verif=false;
                }
            }
        }
        aux.push_back(s);
        if(aux.size()>max){
            out=aux;
            suma_max=suma;
            max=aux.size();
        }else if(aux.size()==max){
            if(suma>suma_max){
                out=aux;
                suma_max=suma;
                max=aux.size();
            }
        }
        aux.clear();
    }
    
    for(auto x:out){
        cout<<x<<' ';
    }
    cout<<endl<<suma_max;
}