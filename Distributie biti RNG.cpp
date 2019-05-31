#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;
int main(){
    int nr,zerozero=0,zerounu=0,unuzero=0,unuunu=0;
    double max,min,zero,unu,altmax,altmin;
    string biti;
    cin>>nr;
    for(int i=0;i<nr;i++){
        cin>>biti;
       
    } 
    for(int i=0;i<biti.size();i++){
        if(biti[i]=='0'&&biti[i+1]=='0'&&(i)%2==0){zerozero++;
    }
    
    if(biti[i]=='0'&&biti[i+1]=='1'&&(i)%2==0){zerounu++;
    }
    if(biti[i]=='1'&&biti[i+1]=='0'&&(i)%2==0){unuzero++;
    }
    if(biti[i]=='1'&&biti[i+1]=='1'&&(i)%2==0){unuunu++;
    }
}
zero= std::count(biti.begin(),biti.end(),'0');
unu= std::count(biti.begin(),biti.end(),'1');
/*if(zerozero%2==0){zerozero=zerozero/2;}else {zerozero=(zerozero/2)+1;}
if(zerounu%2==0){zerounu=zerounu/2;}else {zerounu=(zerounu/2)+1;}
if(unuzero%2==0){unuzero=unuzero/2;}else {unuzero=(unuzero/2)+1;}
if(unuunu%2==0){unuunu=unuunu/2;}else {unuunu=(unuunu/2)+1;}*/

max=std::max(std::max(unuunu,zerozero),std::max(unuzero,zerounu));
min=std::min(std::min(unuunu,zerozero),std::min(unuzero,zerounu));
altmax=std::max(unu,zero);
altmin=std::min(unu,zero);
int validare;
double rezultat1,rezultat2;
rezultat1=max/min;
rezultat2=altmax/altmin;
if(rezultat1<=1.10&&rezultat2<=1.10){validare=1;}else{validare=0;}
//cout<<zerozero<<unuunu;
cout<<fixed<<setprecision(2)<<rezultat1<<" "<<fixed<<setprecision(2)<<rezultat2<<endl<<validare; 


}