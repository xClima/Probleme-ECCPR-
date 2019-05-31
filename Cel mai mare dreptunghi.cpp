#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main(){
    int n,L,l,aria,max=0,p1_out,p2_out,p3_out,p4_out;
    int p1,p2,p3,p4,distanta1,distanta2;
    string nume,nume_out;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nume>>p1>>p2>>p3>>p4;
        distanta1=abs(p4-p2);
        distanta2=abs(p3-p1);
        aria=distanta1*distanta2;
        //cout<<aria<<endl;
        if(aria>max){
            max=aria;
            nume_out=nume;
            p1_out=p1;
            p2_out=p2;
            p3_out=p3;
            p4_out=p4;
            
        }
        
    }
    cout<<nume_out<<' '<<p1_out<<' '<<p2_out<<' '<<p3_out<<' '<<p4_out<<' '<<max;
    
}