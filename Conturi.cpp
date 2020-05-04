#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int n,nr,max=0,counter=1,verif=0,index;
    double medie_sold=0,medie_variatii=0;
    vector<int>vec;
    vector<int>in;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        in.push_back(nr);
        medie_sold+=in[i];
    }
    for(int i=0;i<in.size()-1;i++){
        vec.push_back(in[i+1]-in[i]);
        medie_variatii+=vec[i];
    }
    medie_sold/=in.size();
    medie_variatii/=vec.size();
    for(int i=0;i<vec.size()-1;i++){
        
        if((vec[i]>=0&&vec[i+1]<0)||(vec[i]<0&&vec[i+1]>=0)){
            counter++;
            if(max<=counter){
                index=i;
                max=counter;
            }
        }else{
            counter=1;
        }
    }
    
    cout<<max<<endl;

    for(int i=index-max+2;i<=index+1;i++){
        cout<<in[i+1]<<' ';
    }
    cout<<endl<<fixed<<setprecision(2)<<medie_sold<<' '<<fixed<<setprecision(2)<<medie_variatii;
    
}