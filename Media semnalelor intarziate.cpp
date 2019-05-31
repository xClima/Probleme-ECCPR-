#include <iostream>
#include <iomanip>
using namespace std;

float semnal[100][100],copie[100][100],copie2[100][100];
float medie[100];
int D0[100],D1[100],D2[100];


int main()
{   int Nmics,i,j;
    cin>>Nmics;
    
    for(i=0;i<Nmics;i++)
        for(j=0;j<10;j++)
        {
            cin>>semnal[i][j];   
        }
    
    
    
    //  delta D=0;
    
    int dD0=0;
    for(i=1;i<Nmics;i++)
        {
            D0[0]=0;
            D0[i]=D0[i-1]+dD0;
        }
        
    // delta D=1;
    int dD1=1;
    for(i=1;i<Nmics;i++)
        {
            D1[0]=0;
            D1[i]=D1[i-1]+dD1;
        }
    
    //  delta D=2;
    
    int dD2=2;
    for(i=1;i<Nmics;i++)
        {
            D2[0]=0;
            D2[i]=D2[i-1]+dD2;
        }
        
    
    cout<<endl<<endl;
    
    //  delta D=0;
        for(j=0;j<10;j++)
        {
            float suma=0;
            for(i=0;i<Nmics;i++)               
            {
                suma+=semnal[i][j];
            }
            medie[j]=suma/Nmics;
        }
        
        for(j=0;j<10;j++)
        {
            cout<<fixed<<setprecision(2)<<medie[j]<<" ";
        }
        cout<<endl;
        
        
    // delta D=1;
    // folosesc D1[];
        
        for(i=0;i<Nmics;i++)
            for(j=0;j<10;j++)
            {
                copie[i][j]=semnal[i][j];   
            }
        
        
        
        for(i=1;i<Nmics;i++)
        {
            for(j=9;j>=0;j--)
            {
                copie[i][j]=copie[i][j-D1[i]];
            }
        }
        
        

        for(j=0;j<10;j++)
        {
            float suma=0;
            for(i=0;i<Nmics;i++)               
            {
                suma+=copie[i][j];
            }
            medie[j]=suma/Nmics;
        }
        
        for(j=0;j<10;j++)
        {
            cout<<fixed<<setprecision(2)<<medie[j]<<" ";
        }
        cout<<endl;
        
        
        
        
        
             // delta D=2;
    // folosesc D2[];
        
        for(i=0;i<Nmics;i++)
            for(j=0;j<10;j++)
            {
                copie2[i][j]=semnal[i][j];   
            }
    
        
        for(i=1;i<Nmics;i++)
        {
            for(j=9;j>=0;j--)
            {
                copie2[i][j]=copie2[i][j-D2[i]];
            }
        }

        for(j=0;j<10;j++)
        {
            float suma=0;
            for(i=0;i<Nmics;i++)               
            {
                suma+=copie2[i][j];
            }
            medie[j]=suma/Nmics;
        }
        
        for(j=0;j<10;j++)
        {
            cout<<fixed<<setprecision(2)<<medie[j]<<" ";
        }
        cout<<endl;

}