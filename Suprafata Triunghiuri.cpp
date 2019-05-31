#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int n,nr;
    double ariatotala=0;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
         
    }
    
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            for(int x=0;x<vec.size();x++){
                if(vec[i]*vec[i]+vec[j]*vec[j]==vec[x]*vec[x]){
                    ariatotala+=((vec[i]*vec[j])/2);    
                }
            }
        }
    }
    cout<<ariatotala/2;
}