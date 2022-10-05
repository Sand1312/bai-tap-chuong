#include<iostream>
#include "math.h"
using namespace std;
signed main(){
    float x1,y1,x2,y2;
    cout<<"Toa do diem thu nhat: ";cin>>x1>>y1;
    cout<<"Toa do diem thu hai: ";cin>>x2>>y2;
    cout<<"Do dai doan thang ("<<x1<<","<<y1<<"),("<<x2<<","<<y2<<") la: "<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
