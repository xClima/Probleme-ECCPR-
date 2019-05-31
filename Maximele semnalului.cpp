#include<iostream>
#include<vector>

using namespace std;

int main(){
    double nr,n;
    double suma=0,cnt=0,medie;
    cin>>n;
    vector<double>vec;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
    }
    for(int i=0;i<vec.size();i++){
       if(vec[i]>vec[i+1]&&vec[i]>vec[i-1]&&i!=0&&i!=(vec.size()-1)){
           suma+=vec[i];
           cnt++;
       }
       if(i==0){
           if (vec[i]>vec[i+1]){
               suma+=vec[i];
               cnt++;
           }
       }
       if(i==vec.size()-1){
           if(vec[i]>vec[i-1]){
               suma+=vec[i];
               cnt++;
           }
       }
    }
    medie=suma/cnt;
    cnt=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>medie){
            cnt++;
        }
    }
    cout<<cnt;
}