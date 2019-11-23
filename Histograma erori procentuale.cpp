#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
    double n,nr;
    cin>>n;
    vector<double>vec;
    
    while(cin>>nr){
        vec.push_back(nr);
    }
    
    double proc=0;
    int cnt=0;
    int aux=vec.size();
    while(proc<1){
        
            for(int i=0;i<vec.size();i++){
              if((vec[i]-n)/n>=proc&&(vec[i]-n)/n<(proc+0.05)&&(vec[i]-n)/n!=1){
                  cnt++;
              }
            }
        aux-=cnt;
        cout<<'['<<proc*100<<'%'<<" - "<<(proc+0.05)*100<<'%'<<')'<<" = "<<cnt<<endl;
        proc+=0.05;
        cnt=0;
    }
    cout<<"100%+ = "<<aux<<endl;
    
}