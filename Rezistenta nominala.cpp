#include<iostream>
#include<vector>
#include<numeric>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    double n,nr;
    double medie;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    medie=accumulate(vec.begin(),vec.end(),0)/(double)(vec.size());
    double int1,int2;
    double S,suma=0;
    for(int i=0;i<vec.size();i++){
        suma+=pow((vec[i]-medie),2);
    }
    S=sqrt(suma/n);
    int1=medie-S;
    int2=medie+S;
    double cnt=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>=int1&&vec[i]<=int2){
            cnt++;
        }
    }
    cout<<fixed<<setprecision(2)<<cnt/(vec.size())*100;
    
    
}