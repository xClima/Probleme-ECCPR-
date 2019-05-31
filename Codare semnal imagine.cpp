#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n,m,nr;
    vector<int>vec;
    set<int>out;
    cin>>n>>m;
    for(int i=0;i<m*n;i++){
        cin>>nr;
        vec.push_back(nr);
        out.insert(nr);
    }
    cout<<(int)(vec.size()-(out.size()*2));
}