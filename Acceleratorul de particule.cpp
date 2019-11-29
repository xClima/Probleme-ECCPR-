#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.1415
int main(){
    long double E,R,a,masa,cunoscute=0;
    pair<long double,long double>proton=make_pair(1.503e-27, 1.837e-27);
    pair<long double,long double>electron=make_pair(8.199e-31, 1.0021e-30);
    int n;
    cin>>R>>a>>n;
    long double d=PI*R*2*1000-(PI*R*2*1000)/4;
    long double v=sqrtl(0+2*a*d);
    for(int i=0;i<n;i++){
        cin>>E;
        masa=2*E/(v*v);
        if((masa>=proton.first&&masa<=proton.second)||(masa>=electron.first&&masa<=electron.second)){
            cunoscute++;
        }
        cout<<masa<<endl;
    }
    cout<<fixed<<setprecision(4)<<(n-cunoscute)/n;
}