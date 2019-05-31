#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{   
    int n,cnt=0;
    vector<pair<int,int>>vec;
    int nr;
    cin>>nr;
    while(cin>>n){
    cnt=0;
    string binary = std::bitset<8>(n).to_string(); 
    for(int i=0;i<binary.size();i++){
        if(binary[i]=='0'){
            cnt++;
        }
    }
    vec.push_back(make_pair(cnt,n));
    binary.clear();
}


int max=0;
for(int i=0;i<vec.size();i++){
    if(vec[i].first>max){
        max=vec[i].first;
    }
}
for(int i=0;i<vec.size();i++){
    if(vec[i].first==max){
        cout<<vec[i].second<<endl;
    }
}
    
    
}