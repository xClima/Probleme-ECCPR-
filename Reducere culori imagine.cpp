#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m,k,nr,praguri;
    vector<int>vec;
    vector<int>prag;
    cin>>n>>m>>k;
    for(int i=0;i<m*n*3;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    for(int i=0;i<=k;i++){
        praguri=(256*i)/k;
        prag.push_back(praguri);

    }

    
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<prag.size();j++){
            if(vec[i]>=prag[j]&&vec[i]<=prag[j+1]){
                vec[i]=j;
            }
        }
        
    }
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<' ';
    }    
    

    
}