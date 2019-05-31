#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,k,nr,aux;
    int isPrime=0;
    vector<int>vec;
    vector<int>prim;
    cin>>n>>k;
    
    while(cin>>nr){
    vec.push_back(nr);
    }
    
    for(int j=0;j<vec.size();j++){
    for(int i = 1; i <= vec[j] ; ++i){
        if(vec[j] % i == 0){
          isPrime++;
          
        }
    }
    if(isPrime == 2 && vec[j]>=k){
        prim.push_back(vec[j]);
    }
    isPrime=0;
    }
    
    
    
    sort(prim.begin(),prim.end());
    if(prim.size()>0){
    cout<<prim[0];}else{cout<<-1;}
    
    
}