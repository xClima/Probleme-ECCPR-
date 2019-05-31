#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char numar[2],text[2];
    string judet;
    while(cin>>judet>>numar>>text){
        if(judet=="AB"||judet== "AR"||judet== "AG"||judet== "B"||judet== "BC"||judet== "BH"||judet== "BN"||judet== "BT"||judet== "BV"|| judet=="BR"|| judet=="BZ"||judet== "CS"||judet== "CL"||judet== "CJ"||judet== "CT"||judet== "CV"||judet== "DB"||judet== "DJ"|| judet=="GL"||judet== "GR"||judet== "GJ"||judet== "HR"||judet== "HD" ||judet=="IL"||judet== "IS"||judet== "IF"||judet== "MM"||judet== "MH"||judet== "MS"||judet== "NT"||judet== "OT"||judet== "PH"||judet== "SM"||judet== "SJ"||judet== "SB"||judet== "SV"||judet== "TR"||judet== "TM"||judet== "TL"||judet== "VS"||judet== "VL"||judet== "VN"){
            if(isdigit(numar[0])&&isdigit(numar[1])){
                if((strlen(numar)>=2)&&(strlen(numar)<=3)){
                    if((strlen(text)==3)&&isupper(text[0])&&(!isdigit(text[0]))&&(!isdigit(text[1]))&&(!isdigit(text[2]))){
                        cout<<judet<<' '<<numar<<' '<<text<<endl;
                    }
                }
            }
        }
    }
    
    
}