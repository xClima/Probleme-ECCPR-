#include<iostream>
#include<vector>
using namespace std;
int main(){
    int scutnp,attnp,n,scutni,attni;
    vector<pair<int,int>>vec;
    cin>>scutnp>>attnp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>scutni>>attni;
        vec.push_back(make_pair(scutni,attni));
    }
    int auxs=scutnp,auxa=attnp,cnt=0;
    while(vec.size()!=0){
        while(scutnp>=0&&vec[0].first>=0){
            scutnp-=vec[0].second;
            if(scutnp<0){break;}
            vec[0].first-=attnp;
        }
        if(scutnp<0){
            scutnp=auxs;
            vec.erase(vec.begin());
        }
        if(vec[0].first<0){
            scutnp=auxs;
            vec.erase(vec.begin());
            cnt++;
        }
    }cout<<cnt;
}