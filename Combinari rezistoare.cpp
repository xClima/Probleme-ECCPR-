#include <iostream>

using namespace std;


int main()
{
    uint64_t n,M;
    cin>>n>>M;
    uint64_t k,a, c;
    int ok;
    k=0;ok = 0;
    
    while(k<=n)
    {
        a=1;
        c=1;

        for(int i=n-k+1;i<n+1;i++)
			a=a*i;
		for(int i=2;i<k + 1;i++)   
			c=c*i;

        if(a/c>=M) 
        {             
            ok=1; 
            break;    
        }             
        k++;          
    }
    if(ok == 0)
        cout<<"0";
    else
        cout<<k;
    return 0;
}