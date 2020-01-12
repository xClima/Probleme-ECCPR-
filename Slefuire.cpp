#include<iostream>
#include<vector>

using namespace std;

int main(){
    int out1=0, out2=0, out3=0;
    int M=0,N=0,S=0,D=0,cnt=0;
    char f,nr;
    vector<pair<char,char>>vec;
    vector<char>interzis;
    while(cin>>f>>nr){
        vec.push_back(make_pair(f,nr));
        f=cin.get();
        if(f!=' ')break;
    }
    bool verif=false;
    while(vec.size()>0){
        M=0,N=0,S=0,D=0,cnt=0,verif=false;
        for(int i=0;i<vec.size();i++){
            if(vec[i].first=='M'){
                interzis.push_back('M');
            }else if(vec[i].first=='N'){
                interzis.push_back('M');
                interzis.push_back('N');
            }else if(vec[i].first=='S'){
                interzis.push_back('M');
                interzis.push_back('N');
                interzis.push_back('S');
            }else if(vec[i].first=='D'){
                cnt++;
                break;
            }
            for(int j=0;j<interzis.size()-1;j++){
                if(interzis[j]==vec[i].first){
                    verif=true;
                    break;
                }
            }
            if(verif==false)cnt++;
            else break;
        }
        verif=false;
        if(cnt==1){
            out3++;
            vec.erase(vec.begin());
        }else{
            for(int i=0;i<cnt;i++){
                if(vec[0].second=='0'&&verif==false){
                    out2++;
                    verif=true;
                }
                vec.erase(vec.begin());
            }
            out1++;
        }
        interzis.clear();
    }
    cout<<out1<<endl<<out2<<endl<<out3<<endl;
}

