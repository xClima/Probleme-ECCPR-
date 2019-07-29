#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,nr,max=0;
    cin>>n;
    int min=n;
    double proc=(n*10)/100;
    map<int,int>myMap;
    for(int i=0;i<n;i++){
        cin>>nr;
        myMap[nr]++;
        if(myMap[nr]>max){
            max=myMap[nr];
        }
    }
    for(auto it=myMap.begin();it!=myMap.end();it++){
        if(min>it->second){
            min=it->second;
        }
    }
    if(min==n){
        min=0;
    }
    if(max-min>proc){
        cout<<1;
        return 0;
    }
    cout<<0;

}