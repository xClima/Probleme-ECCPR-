#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include <numeric>

using namespace std;

int main(){
    int n;
    float x;
    float medie=0,suma=0;
    int cnt=0;
    
    vector<float>vec;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
        
    }
    
    
    float w;
    cin>>w;
    
    
    vector<float>aux;
    
    while(vec.size()>=w){
    
    for(int i=0;i<w;i++){
        aux.push_back(vec[i]);
    }
    
    for(int i=0;i<aux.size();i++){
        //cout<<aux[i]<<' ';
        suma=suma+aux[i];
        
    }
    medie=suma/w;
    for(int i=0;i<aux.size()-1;i++){
        if(aux[i]<medie&&aux[i+1]>medie||aux[i]>medie&&aux[i+1]<medie){
            cnt++;
        }
        
    }
        cout<<cnt<<endl;
        
        medie=0;suma=0;cnt=0;
        
        aux.clear();
        for(int i=0;i<w;i++){
            
            vec.erase(vec.begin());
            
        }
    }
    
    
    
    cnt=0;suma=0;medie=0;
    if(vec.size()>0){
        for(int i=0;i<vec.size();i++){
        
        suma+=vec[i];
        
       
    }
    medie=suma/vec.size();
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]<medie&&vec[i+1]>medie||vec[i]>medie&&vec[i+1]<medie){
            cnt++;
        }
        
    }
    
    
    cout<<cnt<<endl;    
    }
    
}
    
    