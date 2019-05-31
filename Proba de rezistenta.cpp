#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<tuple>

using namespace std;

struct Triplet{
    string x,y;
    int  t;
    };

bool sortare(Triplet a,Triplet b){
    return a.t<b.t;
}

int main(){
    int n;
    int nr;
    string nume,prenume;
    vector<Triplet> vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nume>>prenume>>nr;
        vec.push_back({nume,prenume,nr});
    }
    int prag;
    cin>>prag;
    sort(vec.begin(),vec.end(),sortare);
    int cnt=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i].t<=prag){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<vec.size();i++){
        if(vec[i].t<=prag){
            cout<<vec[i].x<<' '<<vec[i].y<<' '<<vec[i].t<<endl;
        }
    }
    
}