#include<iostream>
#include "math.h"
using namespace std;
signed main(){
    float a,b,c;
    cin>>a>>b>>c;
    if (a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0) cout<<"a,b,c khong la 3 canh cua 1 tam giac";
    else {
        cout<<"Dien tich cua tam giac tao boi 3 canh co do dai lan luot a,b,c la: "<<sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
        cout<<"\nChu vi cua tam giac tao boi 3 canh co do dai lan luot a,b,c la: "<<a+b+c;
    }
}
