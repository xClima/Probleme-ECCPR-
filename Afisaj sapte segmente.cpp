#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8;
    char junk;
    while(cin>>n1>>junk>>n2>>junk>>n3>>junk>>n4>>junk>>n5>>junk>>n6>>junk>>n7>>junk>>n8){
    
        if(n1==0 && n2==1 && n3==1 && n4==0 && n5==0 && n6==0 && n7==0 && n8<=1 ){
            cout<<1;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==1 && n3==0 && n4==1 && n5==1 && n6==0 && n7==1 && n8<=1 ){
            cout<<2;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==1 && n3==1 && n4==1 && n5==0 && n6==0 && n7==1 && n8<=1 ){
            cout<<3;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==0 && n2==1 && n3==1 && n4==0 && n5==0 && n6==1 && n7==1 && n8<=1 ){
            cout<<4;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==0 && n3==1 && n4==1 && n5==0 && n6==1 && n7==1 && n8<=1 ){
            cout<<5;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==0 && n3==1 && n4==1 && n5==1 && n6==1 && n7==1 && n8<=1 ){
            cout<<6;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==1 && n3==1 && n4==0 && n5==0 && n6==0 && n7==0 && n8<=1 ){
            cout<<7;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==1 && n3==1 && n4==1 && n5==1 && n6==1 && n7==1 && n8<=1 ){
            cout<<8;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==1 && n3==1 && n4==1 && n5==0 && n6==1 && n7==1 && n8<=1 ){
            cout<<9;
            if(n8==1){
                cout<<'.';
            }
        }else
        if(n1==1 && n2==1 && n3==1 && n4==1 && n5==1 && n6==1 && n7==0 && n8<=1 ){
            cout<<0;
            if(n8==1){
                cout<<'.';
            }
        }else{break;}
        
        

    }    
}