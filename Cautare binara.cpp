#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    int n,x,nr,aux=0,centru;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    cin>>x;
    sort(vec.begin(),vec.end());
    while(vec.size()>1){
        if(vec[vec.size()/2]<x){
            cout<<vec[vec.size()/2]<<endl;
                aux=vec.size()/2;
                while(aux!=0){
                vec.erase(vec.begin());
                aux--;
                    
                }
            
        }if(vec[vec.size()/2]>x){
            cout<<vec[vec.size()/2]<<endl;
            centru=vec[vec.size()/2];
            aux=vec.size()/2+1;
                while(aux!=0){
                vec.pop_back();
                aux--;
                    
                }
                if(vec.size()%2==0){
                    vec.push_back(centru);
                    sort(vec.begin(),vec.end());
                }
        }if(vec[vec.size()/2]==x){
            cout<<vec[vec.size()/2];
            aux=1;
            return 0;
        }
    }
  
    cout<<vec[0];
    
}