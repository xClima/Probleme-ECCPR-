#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    int n,nr,suma=0,out1=0,out2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    while(vec.size()>0){
        for(int i=0;i<vec.size();i++){
            suma+=vec[i];
            if(suma%3==0&&(i+1)>out1&&suma>=3){
                out1=i+1;
                out2=suma;
            }
        }
        suma=0;
        vec.erase(vec.begin());
    }
    cout<<out1<<' '<<out2;
}