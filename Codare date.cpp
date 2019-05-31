#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    uint64_t n;
    uint64_t nr;
    uint64_t aux;
    vector<int>vec;
    vector<int>sum;
    int suma=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cin>>nr;
            vec.push_back(nr);
        }
        for(int j=0;j<vec.size()-1;j++){
           aux=vec[j];
           vec[j]=vec[j+1];
           vec[j+1]=aux;
           j++;
           
        }
        for(int j=1;j<vec.size();j++){
            vec[j]%=2;
            //cout<<vec[j]<<' ';
        }
        for(int j=0;j<vec.size();j++){
            suma+=vec[j];
           
        }
        
        sum.push_back(suma);
        suma=0;
        vec.clear();
    }
    int max=0;
    for(int i=0;i<sum.size();i++){
        //cout<<sum[i]<<' ';
        if(sum[i]>max){
            max=sum[i];
        }
    }
    cout<<max;
    
}