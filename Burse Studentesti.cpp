#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;


    


int main(){
    
    string nume_student,prenume_student,NUME,PRENUME;
    int m,n,p;
    int qwe=0,nr_treceri=0;
    float suma=0,q=0,max=0;
    float medie_student=0,note;
    
    cin>>m>>n>>p;
    
    for(int i=0;i<m;i++){
        cin>>nume_student>>prenume_student;
        //cout<<nume_student<<prenume_student;
        
        for(int j=0;j<n;j++){
            cin>>note;
             suma=note+suma;
            
            medie_student=suma/n;
        if(note>=5){
            
            qwe++;
             if(qwe==n&&medie_student>=8){
                nr_treceri++;
            }
        
            
        }
        
            //cout<<note;
           
           
}
           qwe=0;
            if(max<medie_student){max=medie_student;
             NUME=nume_student;
             PRENUME=prenume_student;
                
            }
            medie_student=0;
            suma=0;
           
               

        
            }
    
        if(nr_treceri-1>p){
    cout<<p<<endl<<NUME<<" "<<PRENUME<<" "<<fixed<<setprecision(2)<<max;}else{ cout<<nr_treceri-1<<endl<<NUME<<" "<<PRENUME<<" "<<fixed<<setprecision(2)<<max;}
    //cout<<p<<" "<<nr_treceri;
    
}