#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
bool sortbysec(const pair<string,int> &a, 
              const pair<string,int> &b) 
{ if(a.second!=b.second)
    return a.second > b.second;
    return a.first < b.first;
    
} 





int main(){
    string str;
    int cnt=0;
    vector<string>cuv;
    vector<pair<string,int>>vec;
    
    while(cin>>str){
        cuv.push_back(str);
    }
    sort(cuv.begin(),cuv.end());
    for(int i=0;i<cuv.size();i++){
std::transform(cuv[i].begin(), cuv[i].end(), cuv[i].begin(), ::tolower);}

    for(int i=0;i<cuv.size();i++){
        cnt=0;
        for(int j=0;j<cuv.size();j++){
            if(cuv[i]==cuv[j]){
                cnt++;
               // cuv.erase(cuv.begin()+j);
                
            }
            
        }
         vec.push_back(make_pair(cuv[i],cnt));
    }
     
   // sort(vec.begin(), vec.end(),sortbyfirst);
   sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    sort(vec.begin(), vec.end(), sortbysec);
    
    
    for(int i=0;i<vec.size();i++){
        
        cout<<vec[i].first<<' '<<vec[i].second<<endl;
        
    }
    
}