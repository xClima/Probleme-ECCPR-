#include<iostream>
#include<iomanip>

using namespace std;

int functie(int x){
    return x*0.9 +2;
}

int main(){
    int n,m;
    cin>>n>>m;
    int img[n][m];
    double suma=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>img[i][j];
            img[i][j]=functie(img[i][j])-img[i][j];
            suma+=img[i][j];
        }cout<<endl;
    }
    double medie;
    medie=suma/(m*n);
    cout<<fixed<<setprecision(2)<<medie;
    
}