#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    struct Triunghi{
        double a,b,c,ind;
    };
    vector<Triunghi>vec;
    double l1,l2,l3,s=0,A=0,p=0,ratio=0,out=0,index=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l1>>l2>>l3;
        index++;
        if((max(max(l1,l2),l3)<(l1+l2+l3)-max(max(l1,l2),l3))){
            if(pow(max(max(l1,l2),l3),2)!=pow((l1+l2+l3)-(max(max(l1,l2),l3)+min(min(l1,l2),l3)),2)+pow(min(min(l1,l2),l3),2)){
                if(l1!=l2&&l1!=l3&&l2!=l3){
                    vec.push_back({l1,l2,l3,index});
                }
                
            }
        }
    }
    for(int i=0;i<vec.size();i++){
        //cout<<vec[i].a<<' '<<vec[i].b<<' '<<vec[i].c<<endl;
        p=vec[i].a+vec[i].b+vec[i].c;
        s=p/2;
        A=sqrt(s*(s-vec[i].a)*(s-vec[i].b)*(s-vec[i].c));
        ratio=A/p;
        if(ratio>out){
            out=ratio;
            index=vec[i].ind;
        }
    }
    cout<<index-1<<' '<<fixed<<setprecision(3)<<out;
}