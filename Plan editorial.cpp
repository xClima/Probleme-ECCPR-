#include<iostream>
using namespace std;
int numDigits(int number)
{
    int digits = 0;
    if (number < 0) digits = 1;
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}
int main(){
    int pag,prob,verif=0,out=0;
    cin>>pag>>prob;
    for(int i=pag;i>=1;i--){
        verif+=i;
    }
    if(verif<prob){
        cout<<0;
    }else{
        for(int i=1;i<=prob;i++){
        out+=numDigits(i);
        }
        cout<<out;
    }
}