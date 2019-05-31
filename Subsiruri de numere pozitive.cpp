#include<iostream>
#include<vector>
using namespace std;
int main(){
    double nr,n,index=0,max=0,index_out,max_out=0;
    cin>>n;
    vector<double>vec;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    for(int i=0;i<vec.size();i++){
        //cout<<vec[i]<<' ';
        if(vec[i]>0){
            max++;
            if(max>max_out){
                max_out=max;
                index_out=i;
            }
        }else{max=0;}
    }
    if(max_out!=0){
    cout<<index_out-max_out+1<<' '<<max_out;}
    else{cout<<-1<<' '<<max_out;}
}