#include<iostream>

using namespace std;

int main(){
    int a[9][9],suma=0,cnt=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
        } 
    }
    for(int x=1;x<10;x++){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(x==a[i][j]){
                    cnt++;
                }
            } 
        }
        if(cnt!=9){
            cout<<"Gresit";
            return 0;
        }
        cnt=0;
    }
    for(int i=0;i<9;i=i+3){
        
        for(int j=0;j<9;j=j+3){
            suma=0;
            for(int x=0;x<3;x++){
                for(int y=0;y<3;y++){
                    suma+=a[x+i][y+j];
                }
            }
            if(suma!=45){
                cout<<"Gresit";
                return 0;
            }
        
        }
    }
    
    cout<<"Corect";
}