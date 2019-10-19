#include <iostream>
#include<vector>
#include<set>
#include<numeric>
#include<iomanip>

using namespace std;

int main() {
    int n;
    int k;
    int moneda;
	double suma=0;
    int sub=0,peste=0;
    vector<int>vec;
    set<int>s;

    cin>>n;

    for(int i=0;i<n;i++){    
	cin>>k;
        for(int j=0;j<k;j++) {
            cin >> moneda;
            vec.push_back(moneda);
            s.insert(moneda);
            if(moneda>=100){
                peste++;
            }else{
                sub++;
            }
        }
        if(s.size()!=6){
            cout<<0<<' ';
		suma++;
		
        }else{
            if(accumulate(vec.begin(),vec.end(),0)>=2900 ){
                cout<<0<<' ';
                suma++;
                
            }else{
                if(peste>=sub){
                    cout<<0<<' ';
                    suma++;
                    
                }else{
                    if(k<8||k>20){
                        cout<<0<<' ';
                        suma++;
                       
                    }
                    else{
                        cout<<1<<' ';
                    }
                }
            }
        }
        peste=0;
        sub=0;
        s.clear();
        vec.clear();
    }
    if(suma!=0){
        cout<<endl<<fixed<<setprecision(2)<<(double)(suma/n);
    }else{
        cout<<endl<<"0.00"; 
    }
}