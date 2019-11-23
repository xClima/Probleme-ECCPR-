#include<iostream>
#include<vector>

using namespace std;

int main(){
    double n,m,nr,max,min,sum=0;
    cin>>n>>m;
    vector<double>vec;
    for(int i=0;i<n;i++){
        cin>>nr;
        sum+=nr;
        vec.push_back(nr);
    }
    max=sum/n;
    min=sum/n;
    for(int i=0;i<m;i++){
        printf("%.2f ",sum/n);
        if(sum/n>max){
            max=sum/(n);
        }
        if(sum/n<min){
            min=sum/(n);
        }
        vec.push_back(sum/n);
        sum+=sum/n;
        sum-=vec[i];
    }
    printf("\n%.2f",max-min);
}