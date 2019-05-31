#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>

using namespace std;

int main(){
    double n,nr;
    vector<double>vec;
    double medie,suma=0,valori,cnt;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>nr;
            vec.push_back(nr);
        }
    }
   for(int i=0;i<vec.size();i++)
    {   cnt=0;
        for(int j=0;j<vec.size();j++)
           {   if(vec[i]>=vec[j])
                cnt++;
           }
     if(cnt>=6)
      {   suma+=vec[i];
          valori++;
      }
    }
     
medie=suma/valori;
cout<<fixed<<setprecision(2)<<medie<<endl;

}