#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n,val,rez=0;
    vector<int>vec;
    string in;
    cin>>n; 
    for(int i=0;i<n;i++){
        cin>>in;
        if(in=="iload"){
            cin>>val;
            vec.push_back(val);
        } if(in=="iadd"){
            if(vec.size()>=2){
            rez=vec[vec.size()-1]+vec[vec.size()-2];
            vec.erase(vec.end()-1);vec.erase(vec.end()-1);
            vec.push_back(rez);
            
            }
            else{
                cout<<"Exception: line "<<i+1<<endl;
                vec.clear();
                break;
            }
                }
        
         if(in=="imul"){
            if(vec.size()>=2){
                rez=vec[vec.size()-1]*vec[vec.size()-2];
                vec.erase(vec.end()-1);
                vec.erase(vec.end()-1);
                vec.push_back(rez);
            }else{
                cout<<"Exception: line "<<i+1<<endl;
                vec.clear();
                break;
                }
            
            }
         if(in=="dup"){
             if(vec.size()>=1){
            rez=vec[vec.size()-1];
            vec.push_back(rez);
        }else{cout<<"Exception: line "<<i+1<<endl;
                vec.clear();
                break;
    }
             
         }
        
    }
    if(vec.size()>=1){
    cout<<vec.size()<<endl;
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i]<<endl;
    }
    }
    
    
}