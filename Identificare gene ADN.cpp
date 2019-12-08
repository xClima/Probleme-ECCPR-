#include<iostream>
#include<set>
using namespace std;
int main(){
    string x,y,z="";
    cin>>x>>y;
    bool verif=true,verif2=true;
    int cnt=0;
    set<int>s;
    for(int i=y.size()-1;i>=0;i--){
        if(y[i]=='A')z+='T';
        else if(y[i]=='T')z+='A';
        else if(y[i]=='C')z+='G';
        else if(y[i]=='G')z+='C';
    }
    for(int i=0;i<x.size()-y.size()+1;i++){
        for(int j=0;j<y.size();j++){
            if(x[i+j]!=y[j]){
                verif=false;
            }
            if(x[i+j]!=z[j]){
                verif2=false;
            }
        }
        if(verif==true){
            cnt++;
            s.insert(i);
        }
        if(verif2==true){
            cnt++;
            s.insert(i);
        }
        verif=true;
        verif2=true;
    }
    cout<<cnt<<endl;
    for(auto i:s)cout<<i<<' ';
}
