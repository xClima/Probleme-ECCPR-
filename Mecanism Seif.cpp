#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,k,q,w;
    vector<int>vec;
    
    for(int i=0;i<6;i++){
        cin>>n;
        vec.push_back(n);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>q>>w;
        if(q==1){
        rotate(vec.begin(),vec.begin()+w,vec.end());}
        if(q==-1){
        rotate(vec.begin(),vec.begin()+vec.size()-w,vec.end());    
        }
    }
    cout<<vec[0];
    
    
}