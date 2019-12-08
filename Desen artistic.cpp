#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    cin>>n;
    string in,c;
    bool red=false,blue=false,yellow=false;
    unordered_set<string>s;
    unordered_set<string>v;
    for(int i=0;i<n;i++){
        cin>>in;
        s.insert(in);
        if(in=="red") red=true;
        if(in=="blue") blue=true;
        if(in=="yellow") yellow=true;
        if(blue==true&&red==true&&yellow==true)s.insert("brown");
        if(red==true&&yellow==true)s.insert("orange");
        if(blue==true&&yellow==true)s.insert("green");
        if(blue==true&&red==true)s.insert("purple");
    }
    bool verif=true;
    while(cin>>in>>n){
        for(int i=0;i<n;i++){
            cin>>c;
            v.insert(c);
        }
        for(auto i:v){
            for(auto j:s){
                if(i==j){
                    verif=true;
                    break;
                }else verif=false;
            }
            if(verif==false) break;
        }
        if(verif==true)cout<<in<<endl;
        verif=true;
        v.clear();
    }
}