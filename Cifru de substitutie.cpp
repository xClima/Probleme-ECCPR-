#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char text[1000];
    cin.get(text,1000);
    
    struct Substitutie{ 
       char pereche[3];
    };
    struct Substitutie v[62];
    for(int i=0;i<62;i++)
    {
        cin>>v[i].pereche;
    }
    
    for(int j=0;j<strlen(text);j++){
        for(int i=0;i<62;i++){
            if(text[j] == v[i].pereche[0]){
                text[j]=v[i].pereche[2];
                break;
            }
        }
        
    }
    
    cout<<text<<endl;


}