#include<bits/stdc++.h>
using namespace std;
 

void Bai8(){
	long long gio, tien, bd, kt;
	cout << "Nhap gio bat dau ( 8 <= gio bat dau): "; cin >> bd;
	cout << "Nhap gio ket thuc (gio ket thuc <= 24): "; cin >> kt;
	gio = kt - bd;
	if ( gio <= 3) tien = gio * 30000;
	else {
		tien = 3 * 30000 + ( gio - 3 ) * 0.7 * 30000 ;
		if ( 8 <= gio && gio <= 17) tien *= 0.9;
	}
	cout << "So tien khach phai tra: " << tien << " dong\n";
}
int main(){
    Bai8();
}