#include<iostream>
using namespace std;



int main()
{
    int m,n,i,j,a,b,k,q,aux;
    long int *x;
   
    cin>>m;
    cin>>n;
    
    int **v;
    v=new int*[m+2];
    for(i=0;i<m+2;i++)
    {   v[i]=new int[n+2];
        for(j=0;j<n+2;j++)
        {   
            if(i==0||j==0||i==m+1||j==n+1){
                v[i][j]==0;
            }else{
            cin>>v[i][j];
                
            }
        }
    }

    x=new long int[(n+2)*(m+2)+1];
    k=0;
     for(i=1;i<m+1;i++)                           
    {                                                                    
        for(j=1;j<n+1;j++)
        {   
                        k=1;
                        x[k]=v[i-1][j];
                        
                        k++;
                        x[k]=v[i][j-1];
                        
                        k++;
                        x[k]=v[i][j];
                        
                        k++;
                        x[k]=v[i][j+1];
                        
                        k++;
                        x[k]=v[i+1][j];
                        
                        for(int z = 1;z<k;z++)
                        {
                            for(int w = z+1; w<=k;w++)
                            {
                                if(x[z]<=x[w])
                                {
                                    aux = x[z];
                                    x[z] = x[w];
                                    x[w] = aux;
                                }
                            }
                        }
                        cout<<x[3]<<endl;
        }
    }
    

    
}