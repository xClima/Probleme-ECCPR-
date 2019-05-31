#include<iostream>
#include<set>
#include<numeric>
using namespace std;
int main(){
    int n,nr;
    set<int>set1;
    set<int>set2;
    cin>>n;
    while(cin>>nr){
        set1.insert(nr);
    }
    for(int i=1;i<n+1;i++){
        set2.insert(i);
    }
    cout<<accumulate(set2.begin(), set2.end(), 0)-accumulate(set1.begin(), set1.end(), 0);
}