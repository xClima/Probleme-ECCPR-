#include<iostream>
#include<vector>

using namespace std;

int main(){
    int out1=0, out2=0, out3=0;
    int A=0,C=0,P=0,D=0,cnt=0;
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
        A=0,C=0,P=0,D=0,cnt=0,verif=false;
        for(int i=0;i<vec.size();i++){
            if(vec[i].first=='A'){
                interzis.push_back('A');
            }else if(vec[i].first=='C'){
                    interzis.push_back('A');
                    interzis.push_back('C');
            }else if(vec[i].first=='P'){
                interzis.push_back('A');
                interzis.push_back('C');
                interzis.push_back('P');
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
    
