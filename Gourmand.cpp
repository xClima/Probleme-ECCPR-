#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    string nume, profesie, fericire;
    double scor;
    vector<pair<string,double>>vec;
    vector<pair<string,double>>out;
    vector<pair<double,string>>final;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>fericire>>scor;
        vec.push_back(make_pair(fericire,scor));
    }
    
    while(cin>>nume>>fericire>>profesie){
        for(int i=0;i<vec.size();i++){
            if(vec[i].first==fericire){
                scor=vec[i].second;
                break;
            }
        }
        out.push_back(make_pair(profesie,scor));       
    }
    double cnt=1;
    while(out.size()>0){
        cnt=1;
        for(int i=1;i<out.size();){
            if(out[0].first==out[i].first){
                out[0].second*=out[i].second;
                out.erase(out.begin()+i);
                cnt++;
            }else i++;
        }
        final.push_back(make_pair(pow(out[0].second,1/cnt),out[0].first));
        out.erase(out.begin());
    }
    sort(final.begin(),final.end());
    for(int i=final.size()-1;i>=0;i--){
        cout<<final[i].second<<' ';
        printf("%.2f\n",final[i].first);
    }
}
