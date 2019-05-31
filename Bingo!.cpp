#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m,nr,cnt=0;
    vector<int>vec;
    vector<int>qqq;
    cin>>n>>m;
    for(int i=0;i<n*n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    for(int i=0;i<m;i++){
        cin>>nr;
        qqq.push_back(nr);
    }
    sort(qqq.begin(),qqq.end());
    qqq.erase(unique(qqq.begin(),qqq.end()),qqq.end());
    
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<qqq.size();j++){
            if(vec[i]==qqq[j]){
                cnt++;
            }
        }
    }
    if(cnt-n*n==0){
        cout<<"BINGO!";
    }else{cout<<n*n-cnt;}
}