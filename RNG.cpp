#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool xxx(int a,int b){
    return a>b;
}
int main(){
    char biti;
    int cnt=0,cntmax=0,altcnt=0;
    vector<char>vec;
    vector<int>out;
    int n;
    int x;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>biti;
        vec.push_back(biti);
    }
    
    for(int i=0;i<vec.size();i++){
       
            if(vec[i]=='1'){
                cnt++;
                if(cnt>cntmax){
                    cntmax=cnt;
                   
                    
                }
            }else{cnt=0;}
        }



for(int j=cntmax;j>=1;j--){
  for(int i=0;i<vec.size();i++){
      
      if(vec[i]=='1'){
                cnt++;
        if(cnt==j&&vec[i+1]!='1'){
                altcnt++;
                 
                    
                }          
            }else{cnt=0;}
      
  }
            out.push_back(altcnt);
            //cout<<altcnt<<' ';
    altcnt=0;
    cnt=0;
}
    vector<int>vec2;  
for(int i=out.size()-1;i>=0;i--){
    vec2.push_back(out[i]);
}
sort(out.begin(),out.end(),xxx);
for(int i=0;i<vec2.size();i++){
    cout<<vec2[i]<<' ';
   
    
}cout<<endl;
if(out==vec2){
    cout<<'1';
}else{cout<<'0';
    //cout<<altcnt;
    
    
}}