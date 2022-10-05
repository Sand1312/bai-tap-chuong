#include<bits/stdc++.h>
using namespace std;

void Bai7(){
	long long hs, lcb, TN;
	lcb = 650000;
	cout << "Nhap tham nien cong tac: "; cin >> TN;
	if ( TN < 12) hs = 1.92;
	if ( 12 <= TN && TN < 36) hs = 2.34;
	if ( 36 <= TN && TN < 60) hs = 3;
	else hs = 4.5;
	cout << "Luong: " << hs * lcb << " dong\n";
}

int main(){
    Bai7();
}