#include<iostream>
#include<vector>

using namespace std;

int main(){
    int k,n,nr;
    vector<int>vec;
    cin>>k>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    if(k==n||k>n){
        for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<endl;
    }
    if(k<n){
            
        for(int i=0;i<k;i++){
            for(int j=i;j<vec.size();){
                cout<<vec[j]<<' ';
                j=j+k;
            }
            cout<<endl;
    
        }
                    
    }  
}


    