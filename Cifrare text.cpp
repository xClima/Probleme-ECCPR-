#include<iostream>
#include<ctype.h>
#include<string.h>

using namespace std;
int main()
{
    char text[257];
    int i,j,n,k,v[500];     
    cin.get(text, 256);
    cin.get();
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>v[j]; 
    }
    char a[26][2]= {
                        {"A"},{"B"},{"C"},{"D"},{"E"},{"F"},{"G"},{"H"},{"I"},{"J"},{"K"},{"L"},{"M"},{"N"},{"O"},
                        {"P"},{"Q"},{"R"},{"S"},{"T"},{"U"},{"V"},{"W"},{"X"},{"Y"},{"Z"}
                    };
    char b[26][2]= {
                        {"a"},{"b"},{"c"},{"d"},{"e"},{"f"},{"g"},{"h"},{"i"},{"j"},{"k"},{"l"},{"m"},{"n"},{"o"},
                         {"p"},{"q"},{"r"},{"s"},{"t"},{"u"},{"v"},{"w"},{"x"},{"y"},{"z"}
                    };  
  
    int indice_key;
    int contorLitera = 0;
    for(i=0;i<strlen(text);i++)  
    {

        if(isupper(text[i]))
        {  
            
            indice_key=contorLitera%n;
   
        
            for(j=0;j<26;j++)
            {
                 if(text[i]==a[j][0])
                 {
                    
                   text[i]=a[(j+v[indice_key])%26][0];
                  
                   break;
                 }
            }
            contorLitera++;
        }
        else if(islower(text[i]))
        {
            
            
            
            indice_key=contorLitera%n;
          
        
            for(j=0;j<26;j++)
            {
                 if(text[i]==b[j][0])
                 {
                   
                   text[i]=b[(j+v[indice_key])%26][0];
                  
                   break;
                 }
            }
            contorLitera++;
        }
        
        
       
    }
    
    cout<<text;
   
}