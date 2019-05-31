#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int n,nr;
    vector<int>vec;
    double cnt_pos=0,cnt_neg=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr;
        vec.push_back(nr);
        if(nr>=0){
            cnt_pos++;
        }else {cnt_neg++;}
    }
    int max=0,counter=1,verif=0;
    int index;
    
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
        cout<<vec[i]<<' ';
    }
    cout<<endl;
    cout<<"+:"<<fixed<<setprecision(2)<<(cnt_pos/vec.size())*100<<'%'<<"-:"<<fixed<<setprecision(2)<<(cnt_neg/vec.size())*100<<'%';
    
    
}