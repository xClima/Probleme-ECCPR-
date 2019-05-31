#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    struct Puncte{
        double x,y,z;
    };
    vector<Puncte>vec;
    double n,c1,c2,c3;
    cin>>n;
    for(int i=0;i<n+1;i++){
        cin>>c1>>c2>>c3;
        vec.push_back({c1,c2,c3});
    }
    double dist=0,min=99999,index;
    
    while(vec.size()!=1){
        for(int i=vec.size()-1;i<vec.size();i++){
            for(int j=0;j<vec.size()-1;j++){
                if(min>sqrt(pow(vec[i].x-vec[j].x,2)+pow(vec[i].y-vec[j].y,2)+pow(vec[i].z-vec[j].z,2))){
                    min=sqrt(pow(vec[i].x-vec[j].x,2)+pow(vec[i].y-vec[j].y,2)+pow(vec[i].z-vec[j].z,2));
                    index=j;
                }
            }
        }
        dist+=min;
        min=99999;
        vec.pop_back();
        vec.push_back({vec[index].x,vec[index].y,vec[index].z});
        vec.erase(vec.begin()+index);
    }
    cout<<fixed<<setprecision(2)<<dist;
}