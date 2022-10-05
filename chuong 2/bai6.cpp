#include<bits/stdc++.h>
using namespace std;
void Bai6(){
	int x ;
	cout << "Nhap so KW dien tieu thu: "; cin >> x;
	if ( x <= 100 ) cout << "Tien dien: " << x * 2000 << " dong\n";
	if ( x > 100 && x <= 200) cout << "Tien dien: " << 100 * 2000 + ( x - 100 ) * 2500 << " dong\n";
	if ( x > 200 && x <= 300) cout << "Tien dien: " << 100 * 2000 + 100 * 2500 + ( x - 200 ) * 3000 << " dong\n";
	else cout << "Tien dien: " << 100 * 2000 + 100 * 2500 + 100 * 3000 + ( x - 300 ) * 5000 << " dong \n";
}
int main(){
    Bai6();
}