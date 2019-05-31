#include<iostream>
#include<vector>

using namespace std;

int main(){
int N,M,P;
vector<int>vec;

cin>>M>>N>>P;

for(int i=0;i<N;i++){
    vec.push_back(i);
}
    int index=P-1;
    M=M-1;
    while(vec.size()!=1){
        index+=M;
        while(index>=vec.size()){
            index=index-vec.size();
        }
        
        //cout<<vec[index]<<' ';
        vec.erase(vec.begin()+index);
        
    }
    
    cout<<vec[0]+1;
    
    
}