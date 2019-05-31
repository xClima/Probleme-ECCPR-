#include<iostream>
using namespace std;
int main(){
    int nr,n,m;
    int cnt=0;
    cin>>n>>m;
    for(int i=0;i<n*m;i++){
        cin>>nr;
       for(int j=2;j<=nr/2;j++){
            if(nr%j==0){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
}