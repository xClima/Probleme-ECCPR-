#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main()
{
    int i,j,m,n;
    float a[20][20];
        cin>>m;
        cin>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
         
    float sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
    }  
    
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=(1.0/(m*n))*sum;
        }
    }   
    
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<int(a[i][j]);
            cout<<endl;
        }
    }

}
