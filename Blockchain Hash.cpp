#include<iostream>
#include<cmath>
using namespace std;

int N,k;
long int v[100001];
void citire(){
    cin>>N>>k;
    for(int i=0;i<N;i++)
        cin>>v[i];
}
int schimbare(int x){
    int y,z,nr=0,i=0;
    if(x<10)
        nr=x;
    else{
        while(x>=10){
            y=x%10;
            x=x/10;
            z=x%10;
            nr=nr+abs(y-z)*pow(10,i);
            i++;
        }
        }
        return nr;
}

int main(){
    citire();
    int s=0,aux=k,max=0,x;
    long int r[10001];
    for(int i=0;i<N;i++){
        while(aux!=0){
            x=schimbare(v[i]);
            s=s+x;
            v[i]=x;
            aux--;
        }
        r[i]=s;
        aux=k;
        s=0;
    }
    for(int i=0;i<N;i++)
        if(r[i]>max)
            max=r[i];
    cout<<max<<endl;
    return 0;
}

