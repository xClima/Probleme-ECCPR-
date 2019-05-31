#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,m,s,a;
    cin>>m>>s;
    struct Triplet{
                    int r;
                    int g;
                    int b;
                  } c[100][100];
    struct Triplet max;
                  
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>c[i][j].r>>c[i][j].g>>c[i][j].b;
        }
        
    }

    int xM,yM,ii,jj;
    xM = 0; yM = 0;
    for(i=0;i<m;i+=s)
    {  
        for(j=0;j<m;j+=s)
         {
            max.r=-9999; max.g=-9999; max.b=-9999;
            for(int x = 0;x<s;x++)
            {
                for(int y = 0; y<s; y++)
                {
                    ii = i+x;
                    jj = j+y;
                    if(c[ii][jj].r>max.r)
                    {
                        max.r=c[ii][jj].r;
                    }
                    if(c[ii][jj].g>max.g)
                    {
                        max.g=c[ii][jj].g;
                    }
                    if(c[ii][jj].b>max.b)
                    {
                        max.b=c[ii][jj].b;
                    }
                }
                
                
            }
           
            
            cout<<max.r<<" "<<max.g<<" "<<max.b<<endl; 
         }
    }
    

}