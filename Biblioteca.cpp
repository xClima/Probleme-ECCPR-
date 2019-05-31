#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortare(int a,int b){
    return a>b;
}

int main(){
  int dimensiune_raft, numar_carti, nr, pag;
  vector<int>vec;
  cin>>dimensiune_raft>>numar_carti;
  
  for(int i=0;i<numar_carti;i++){
      cin>>nr>>pag;
      
      for(int j=0;j<nr;j++){
          vec.push_back(pag);
      }
  } int dim=dimensiune_raft;
    sort(vec.begin(),vec.end(),sortare);
    
    do{
        dimensiune_raft=dim;
        while(dimensiune_raft>=0){
        for(int i=0;i<vec.size();i++){
            if(vec[i]<=dimensiune_raft){
                dimensiune_raft=dimensiune_raft-vec[i];
                cout<<vec[i]<<' ';
                
                vec.erase(vec.begin()+i);
                i--;
                
                
            }
            
        }dimensiune_raft=-1;
        }
        cout<<endl;
        
        
        
    }while(vec.size()>1);
    
}
    
