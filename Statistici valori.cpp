#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int nr,max=0,cnt=0;
    vector<int>vec;
    vector<int>h;
    for(int i=0;i<m*n;i++){
        cin>>nr;
        if(nr>max){
            max=nr;
        }
        vec.push_back(nr);
    }
    for(int j=0;j<=max;j++){
        for(int i=0;i<vec.size();i++){
            if(j==vec[i]){
                cnt++;
            }
            
        }h.push_back(cnt);
        cnt=0;
    }
    double suma=accumulate(h.begin(),h.end(),0);
    double medie=suma/(h.size());
    double d=0;
    suma=0;
    for(int i=0;i<h.size();i++){
        suma+=pow((h[i]-medie),2);
    }
    d=sqrt(suma/10);
    int out=0;
    for(int i=0;i<h.size();i++){
        if(h[i]>=d){
            out++;
        }
    }
    cout<<out;
}