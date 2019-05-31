#include<iostream>
#include<vector>

using namespace std;

int main(){
    int zile;
    int bani;
    int fericire_zi;
    int pret_bomboana;
    int aroma_max=0;
    vector<int>ban;
    vector<pair<int,int>>vec;
    int fericire_total=0;
    
    
    cin>>zile;
    
    for(int i=0;i<zile;i++){
        cin>>bani;
        ban.push_back(bani);
    }
    for(int i=0;i<zile;i++){
        cin>>pret_bomboana>>fericire_zi;
        vec.push_back(make_pair(pret_bomboana,fericire_zi));
    }
    for(int i=0;i<zile;i++){
        if(ban[i]>=vec[i].first){
            ban[i+1]+=ban[i]-vec[i].first;
            if(aroma_max<=vec[i].second){
                aroma_max=vec[i].second;
            }
            fericire_total+=vec[i].second;
            
            
        }
        if(ban[i]<vec[i].first){
            ban[i+1]+=ban[i];
            if(aroma_max<=vec[i].second){
                
                fericire_total-=vec[i].second;
                
            }
        }
    }
    cout<<fericire_total;
}