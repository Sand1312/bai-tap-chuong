#include<bits/stdc++.h>
using namespace std;

void Bai2(){
	double x1,x2,y1,y2,x,y,d;
	cout<<"Nhap vao toa do 2 diem: ";
	cin>>x1>>y1>>x2>>y2;
	x=(x1+x2)/2;
	y=(y1+y2)/2;
	d= sqrt((abs(x1-x2))*(abs(x1-x2))+(abs(y1-y2))*(abs(y1-y2)));
	cout<<"Toa do trung diem la: "<<x<<" "<<y<<endl;
	cout<<"Do dai doan thang la: "<<d;
 
}
int main(){
    Bai2();
}