#include<bits/stdc++.h>
using namespace std;

void Bai3(){
	double x1, x2, x3, y1, y2, y3, D1, D2, D3, S, T;
	cout << "Nhap toa do dinh 1 ( x1 , y1 ): "; cin >> x1 >> y1;
	cout << "Nhap toa do dinh 2 ( x2 , y2 ): "; cin >> x2 >> y2;
	cout << "Nhap toa do dinh 3 ( x3 , y3 ): "; cin >> x3 >> y3;
	cout << "Toa do trong tam la ( x , y ): (" << setprecision(2) << fixed << ( x1 + x2 + x3 ) / 3 << " , " << ( y1 + y2 + y3 ) / 3 << ")\n";
	D1 = sqrt(pow( ( x2 - x1 ), 2 ) + pow( ( y2 - y1 ), 2 ));
	D2 = sqrt(pow( ( x2 - x3 ), 2 ) + pow( ( y2 - y3 ), 2 ));
	D3 = sqrt(pow( ( x3 - x1 ), 2 ) + pow( ( y3 - y1 ), 2 ));
	T = ( D1 + D2 + D3 ) / 2;
	S = sqrt( T * ( T - D1 ) * ( T - D2 ) * ( T - D3));
	cout << "Dien tich tam giac la: " << setprecision(2) << fixed << S << endl;
	cout << "Chu vi tam giac la: " << setprecision(2) << fixed << T * 2 << endl;
}
 int main(){
    Bai3();
}