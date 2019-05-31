#include<iostream>
#include<string>
#include<vector>

using namespace std;

char firstletter(string str){
    char first=str[0];
    return first;
}

char lastletter(string str){
    char last=str[str.size()-1];
    return last;
}

int main(){
    int M,N;
    char alfa,beta;
    string cuvinte;
    vector<string>vec;
    
    cin>>alfa>>beta>>M>>N;
    beta=tolower(beta);
    alfa=tolower(alfa);
    while(cin>>cuvinte){
        vec.push_back(cuvinte);
    }
    
    int cnt1=0,cnt2=0,cnt3=0;
    char prima,ultima;
    for(int i=0;i<vec.size();i++){
        prima=firstletter(vec[i]);
        prima=tolower(prima);
        ultima=lastletter(vec[i]);
        ultima=tolower(ultima);
        if(prima==alfa&&ultima==beta&&vec[i].size()<M){
            cnt1++;
        }
        if(prima==alfa&&ultima==beta&&vec[i].size()>=M&&vec[i].size()<N){
            cnt2++;
        }
        if(prima==alfa&&ultima==beta&&vec[i].size()>=N){
            cnt3++;
        }
        
        
    }
    
    cout<<cnt1<<' '<<cnt2<<' '<<cnt3<<endl;
    
    
    
    
}