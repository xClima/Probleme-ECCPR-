#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;



int main(){
 int nr_in;
 int nr_out=0,max=0;

 cin>>nr_in;
   
 vector<char>vec;
 vector<char>vec2;
while (nr_in > 0) { 
  
        if(nr_in % 2==1){
        vec2.push_back('1') ;
        }
        else{vec2.push_back('0') ;}
        nr_in = nr_in / 2; 
        
    } 
    
    for(int i=vec2.size()-1;i>=0;i--){
        vec.push_back(vec2[i]);
    }
    int x;
    x=vec.size();
    do{
        rotate(vec.begin(),vec.begin()+vec.size()-1,vec.end());
         for(int i=0;i<vec.size();i++){
             
     if(vec[i]=='1'){nr_out+=pow(2,vec.size()-i-1);
         
     }
 }
 if(nr_out>max){
     max=nr_out;
 }
 nr_out=0;
    x--;
    }while(x!=0);
 
cout<<max;
 
 
 
}







