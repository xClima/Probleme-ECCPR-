#include<iostream>
using namespace std;
int main(){
    int n,nr,aux=0;
    cin>>n;
    while(cin>>nr){
        aux+=nr;
    }
    cout<<21*n-aux;
}