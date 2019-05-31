#include <iostream>

using namespace std;

int main()
{
    int k;
    uint64_t M;
    uint64_t rez;
    cin>>k>>M;
    int n=k;
    int ok=0;
    do
    {
        rez = 1; 
        for (int i=n-k+1;i<n+1;i++) 
            rez=rez*i;
         
        if(rez<=M){
            ok = 1;
        }
       n++;
        if(rez>M)
            break;

    }while(1);
    if (ok==0)
        cout<<0;
    else 
        cout<<n-2;
        
    return 0;
}