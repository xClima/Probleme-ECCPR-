#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

class Fructe{
public:    int raft,Mc,Rc,Gc,Bc;
    
public: Fructe(int raft_in,int Mc_in,int Rc_in,int Gc_in,int Bc_in){
    raft=raft_in;
    Mc=Mc_in;
    Rc=Rc_in;
    Gc=Gc_in;
    Bc=Bc_in;
    
}

double distanta(Fructe x){
    return sqrt((Mc-x.Mc)*(Mc-x.Mc)+(Rc-x.Rc)*(Rc-x.Rc)+(Gc-x.Gc)*(Gc-x.Gc)+(Bc-x.Bc)*(Bc-x.Bc) );
}

int getraft(Fructe x){
    return x.raft;
}    
};

int main(){
    int n,rft,M,R,G,B,raft_out;
    vector<Fructe *>vec;
    
    cin>>n;
    
    for(int i=0;i<=n;i++){
        cin>>rft>>M>>R>>G>>B;
        vec.push_back(new Fructe(rft,M,R,G,B));
        
    }
    double distantaminima=(vec[0]->distanta(*vec[1]));
    for(int i=0;i<1;i++){
    for(int j=1;j<n;j++){
        if(distantaminima>(vec[i]->distanta(*vec[j]))){
            distantaminima=(vec[i]->distanta(*vec[j]));
            raft_out=vec[i]->getraft(*vec[j]);
        }
    }
    }
    cout<<raft_out;
}

