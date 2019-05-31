#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main(){
    
    double l1,l2,l,r,n,max=0,aria,out_l,out_r,out_l1,out_l2;
    string forma,out;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>forma;
        if(forma=="cerc"){
            cin>>r;
            aria=r*r*3.14;
            if(aria>max){
                max=aria;
                out="cerc";
                out_r=r;
            }
        }else
        if(forma=="patrat"){
            cin>>l;
            aria=l*l;
            if(aria>max){
                max=aria;
                out="patrat";
                out_l=l;
            }
        }else
        if(forma=="dreptunghi"){
            cin>>l1>>l2;
            aria=l1*l2;
            if(aria>max){
                max=aria;
                out="dreptunghi";
                out_l1=l1;
                out_l2=l2;
            }
        }
    }
    if(out=="cerc"){
        cout<<out<<' '<<fixed<<setprecision(2)<<out_r;
    }else
    if(out=="patrat"){
        cout<<out<<' '<<fixed<<setprecision(2)<<out_l;
    }else
    if(out=="dreptunghi"){
        cout<<out<<' '<<fixed<<setprecision(2)<<out_l1<<' '<<fixed<<setprecision(2)<<out_l2;
    }
}