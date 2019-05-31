#include<iostream>
#include<string.h>
using namespace std;
           
int main()
 
{   int n,i,j;
    char text[5119], cuvant[5119], *p;
    
    cin.get(text,5119);     
    cin>>n;                 

    for(int i=0;i<n;i++)
    {
        
        cin>>cuvant;
        p=strstr(text,cuvant);
        while(p!=NULL)
        {
            for(int j=0;j<strlen(cuvant);j++) 
                p[j]='*';
            p=strstr(p,cuvant);
        }
        
    }
    cout<<text<<endl;

}


//#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    vector<string>words;
    string x;
    string s;
    string y;
    int n;
    
    getline(cin,s);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        words.push_back(x);
    }

    for(int i=0;i<words.size();i++){
        for(int j=0;j<words[i].size();j++){
            y+='*';
        }
        while(s.find(words[i]) != string::npos){
            s.replace(s.find(words[i]), words[i].size(),y );
        }
        y.clear();
    }
    cout<<s<<endl;

}

