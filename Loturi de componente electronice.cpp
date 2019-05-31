#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    int n,nr_comp,rezistoare=0,condensatoare=0,tranzistoare=0,validare=0,max=0,aux=0;
    char comp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nr_comp;
        for(int j=0;j<nr_comp;j++){
            cin>>comp;
            max++;
            if(comp=='R'){rezistoare++;}
            if(comp=='C'){condensatoare++;}
            if(comp=='T'){tranzistoare++;}
        }
        if(aux<max){
            aux=max;
            
        }
         if(condensatoare>=tranzistoare&&rezistoare>=condensatoare&&condensatoare>=1&&tranzistoare>=1&&rezistoare>=1){validare++;}
       rezistoare=0;
         condensatoare=0;
         tranzistoare=0;
         max=0;
    }
    cout<<validare<<" "<<aux;
    
}