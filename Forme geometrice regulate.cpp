#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;

class Point2D{long double x;long double y;
public:

Point2D(long double x_in,long double y_in){
    x=x_in;
    y=y_in;
}

long double distanceTo(Point2D anotherPoint){
    return sqrt(pow(( x- anotherPoint.x),2)+pow(( y -anotherPoint.y),2));
}

};

int main(){
    long double n,x,y,verificare=0,distanta;
    cin>>n;
    vector<Point2D>vec;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vec.push_back(Point2D(x,y));
    }
    distanta=vec[n-1].distanceTo(vec[0]);
    //cout<<distanta;
    for(int i=0;i<n-1;i++){
        if(vec[i].distanceTo(vec[i+1])+0.001>=distanta&&vec[i].distanceTo(vec[i+1])-0.001<=distanta){
           //cout<<vec[i].distanceTo(vec[i+1])<<endl;
           //distanta=vec[i].distanceTo(vec[i+1]);
           //cout<<distanta<<' ';
            verificare=1;
        }else{verificare=0;break;}
    }
    if(verificare==1){
        cout<<"da";
    }else{cout<<"nu";
    }
    
}