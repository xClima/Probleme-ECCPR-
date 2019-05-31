#include<iostream>
using namespace std;
int main()                  
{
    int m,k, n,p,i,j,index;
    signed int v[500][500],w[500][500],x[500],s[1000],y[1000];
    cin>>m>>n>>p;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>v[i][j];
        }
    }
    for(j=1;j<=n;j++)
    {
        for(k=1;k<=p;k++)
        {
            cin>>w[j][k];
        }
    }
    for(i=1;i<=m;i++)
    {
        cin>>x[i];
    }

    
    for(j=1;j<=n;j++) 
    {   
        s[j]=0;
        for(i=1;i<=m;i++)
        {
            s[j]+=v[i][j]*x[i];   
        }
    }

    for(k=1;k<=p;k++)
    {
        for(j=1;j<=n;j++)
        {
             y[k]+=s[j]*w[j][k];   
               
        }
    }

    int max=0;
    for(k=1;k<=p;k++)
    {
        if(y[k]>max)
        {
            max=y[k];
            index=k;
        }
    }
    cout<<index<<endl;
    
}