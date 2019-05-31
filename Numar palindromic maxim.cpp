#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

bool sortare(int a,int b){
    if(a>b||a<b){
    return a>b;
        
    }else if(a==b){
        return a<b;
    }
}

int main(){
    int n,nr,x=0,y=0;
    vector<int>vec;
    vector<int>aux;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        if(vec.size()>0){
        for(int i=0;i<vec.size();i++){
            if(nr==vec[i]){
                x++;
                
            }
        }
        
        if(x>0){
            for(int i=0;i<aux.size();i++){
                if(nr==aux[i]){
                    y++;
                }
            }
            if(y>=x){
                vec.push_back(nr);
            }else{aux.push_back(nr);}
        }else{vec.push_back(nr);}}else{vec.push_back(nr);}
        y=0;
        x=0;
    }
    sort(vec.begin(),vec.end(),sortare);
    sort(aux.begin(),aux.end());
    int sumA=0,sumB=0,sumAaux=0,sumBaux=0;
    if((vec.size()+aux.size())%2==0){
    sumA=accumulate(vec.begin(),vec.end(),0);
    }else{sumAaux=accumulate(vec.begin(),vec.end(),0)-accumulate(aux.begin(),aux.end(),0);
        
        sumA=accumulate(vec.begin(),vec.end(),0)-sumAaux;
    }
    
    sumB=accumulate(aux.begin(),aux.end(),0);
    
   
        for(int i=0;i<vec.size();i++){
            if(sumAaux==vec[i]){
                vec.erase(vec.begin()+i);
                break;
            }
        }
        
          /*
           cout<<sumA;
    cout<<endl<<sumB<<endl;
        for(int i=0;i<vec.size();i++){
            cout<<vec[i];
        }cout<<sumAaux;
        for(int i=0;i<aux.size();i++){
            cout<<aux[i];
        }
        */
        
        if(vec.size()>aux.size()){
            cout<<0;
        }else{
        if(sumA==sumB&&sumAaux==0){
        for(int i=0;i<vec.size();i++){
            cout<<vec[i];
        }
        for(int i=0;i<aux.size();i++){
            cout<<aux[i];
        }}else if(sumA==sumB&&sumAaux>0){
            for(int i=0;i<vec.size();i++){
            cout<<vec[i];
        }cout<<sumAaux;
        for(int i=0;i<aux.size();i++){
            cout<<aux[i];
        }}else{cout<<0;}}
        
        
    
    
    
}