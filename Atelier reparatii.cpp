#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int>vec;
    int n,c;
    
    for(int i=0;i<7;i++){
        cin>>c;    
        vec.push_back(c);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cin>>c;
            vec[j]+=c;
        }
    }
    sort(vec.begin(),vec.end());
    if(vec[0]<n){
    cout<<vec[0];
    }else{
        cout<<n;
    }
    
}