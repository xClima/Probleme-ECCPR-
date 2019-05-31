#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::vector<int>vec;
    int volum,n,nr,q,suma=0;
    std::cin>>volum>>n;
    for(int i=0;i<n;i++){
        std::cin>>q>>nr;
        for(int j=0;j<q;j++){
            vec.push_back(nr);
        }
    }
    while(vec.size()>0){
        for(int i=0;i<vec.size();i++){
            if(suma+vec[i]<=volum){
                suma+=vec[i];
                std::cout<<vec[i]<<' ';
                vec.erase(vec.begin()+i);
                i=-1;
            }
        }
        suma=0;
        std::cout<<std::endl;
    }
}