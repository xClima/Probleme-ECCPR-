#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<pair<int,double>>vec;
    double dist,nr,viteza,km,fastest=999999,distanta,timp;
    cin>>dist>>nr;
    for(int i=1;i<=nr;i++){
        cin>>km>>viteza;
        distanta=dist-km;
        timp=(distanta/viteza);
        vec.push_back(make_pair(i,timp));
        if(fastest>=timp){
            fastest=timp;
        }
    }
    for(int i=0;i<vec.size();i++){
        if(fastest==vec[i].second){
            cout<<vec[i].first<<' ';
        }
    }
}