#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortare(const pair<int,int>&a, const pair<int,int>&b){
    if (a.second>b.second||a.second<b.second){
        return a.second<b.second;
    }else {
        return a.first<=b.first;
    }
}

int main(){
    vector<pair<int,int>>vec;
    int n,luna,zi;
    char junk;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>zi>>junk>>luna;
        vec.push_back(make_pair(zi,luna));
    }
    sort(vec.begin(),vec.end(),sortare);
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i].second>9&&vec[i].first>9){
        cout<<vec[i].first<<'-'<<vec[i].second<<endl;}
        else if(vec[i].first>9&&vec[i].second<=9){cout<<vec[i].first<<'-'<<'0'<<vec[i].second<<endl;
        }else if(vec[i].first<=9&&vec[i].second<=9){cout<<'0'<<vec[i].first<<'-'<<'0'<<vec[i].second<<endl;}
            else{cout<<'0'<<vec[i].first<<'-'<<vec[i].second<<endl;}
        
    }
    
}