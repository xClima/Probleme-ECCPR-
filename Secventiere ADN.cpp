#include<iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    
    for(int i=0;i<x.size()/2;i++){
        if((x[i]=='A'&&x[x.size()-i-1]!='T')||(x[i]=='T'&&x[x.size()-i-1]!='A')||(x[i]=='C'&&x[x.size()-i-1]!='G')||(x[i]=='G'&&x[x.size()-i-1]!='C')){
            cout<<i+1;
            return 0;
        }
    }
    cout<<0;
}