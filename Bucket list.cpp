#include<iostream>
using namespace std;
int main()
{
     int n;
     unsigned long long v[2000],i,nr1=0,nr2=0,nr3=0,nr4=0,nr5=0,nr6=0,nr7=0,nr8=0,nr9=0,nr10=0,nr11=0,nr12=0,nr13=0,nr14=0,nr15=0,nr16=0,nr17=0,nr18=0,nr19=0;
     cin>>n; // numarul de valori
   
    for(i=0;i<n;i++)
    cin>>v[i];
    
 
    for(i=0;i<n;i++)
     {
        if(v[i]>=0 && v[i]<=9) nr1++;
    	if(v[i]>=10 && v[i]<=99) nr2++;
        if(v[i]>=100 && v[i]<=999) nr3++;
        if(v[i]>=1000 && v[i]<=9999) nr4++;
        if(v[i]>=10000 && v[i]<=99999) nr5++;
        if(v[i]>=100000 && v[i]<=999999) nr6++;
        if(v[i]>=1000000 && v[i]<=9999999) nr7++;
        if(v[i]>=10000000 && v[i]<=99999999) nr8++;
        if(v[i]>=100000000 && v[i]<=999999999) nr9++;
        if(v[i]>=1000000000 && v[i]<=9999999999) nr10++;
        if(v[i]>=10000000000 && v[i]<=99999999999) nr11++;
        if(v[i]>=100000000000 && v[i]<=999999999999) nr12++;
        if(v[i]>=1000000000000 && v[i]<=9999999999999) nr13++;
        if(v[i]>=10000000000000 && v[i]<=99999999999999) nr14++;
        if(v[i]>=100000000000000 && v[i]<=999999999999999) nr15++;
        if(v[i]>=1000000000000000 && v[i]<=9999999999999999) nr16++;
        if(v[i]>=10000000000000000 && v[i]<=99999999999999999) nr17++;
        if(v[i]>=100000000000000000 && v[i]<=999999999999999999) nr18++;
        if(v[i]>=1000000000000000000 && v[i]<=9999999999999999999UL) nr19++;
    }
    
    if(nr1!=0) cout<<1<<" "<<nr1<<endl;
    if(nr2!=0) cout<<2<<" "<<nr2<<endl;
    if(nr3!=0) cout<<3<<" "<<nr3<<endl;
    if(nr4!=0) cout<<4<<" "<<nr4<<endl;
    if(nr5!=0) cout<<5<<" "<<nr5<<endl;
    if(nr6!=0) cout<<6<<" "<<nr6<<endl;
    if(nr7!=0) cout<<7<<" "<<nr7<<endl;
    if(nr8!=0) cout<<8<<" "<<nr8<<endl;
    if(nr9!=0) cout<<9<<" "<<nr9<<endl;
    if(nr10!=0) cout<<10<<" "<<nr10<<endl;
    if(nr11!=0) cout<<11<<" "<<nr11<<endl;
    if(nr12!=0) cout<<12<<" "<<nr12<<endl;
    if(nr13!=0) cout<<13<<" "<<nr13<<endl;
    if(nr14!=0) cout<<14<<" "<<nr14<<endl;
    if(nr15!=0) cout<<15<<" "<<nr15<<endl;
    if(nr16!=0) cout<<16<<" "<<nr16<<endl;
    if(nr17!=0) cout<<17<<" "<<nr17<<endl;
    if(nr18!=0) cout<<18<<" "<<nr18<<endl;
}
    