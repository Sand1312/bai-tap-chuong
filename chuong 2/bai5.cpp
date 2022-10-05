#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c, D, x1, x2;
    cout << "Nhap he so cua phuong trinh bac hai ( a, b, c): "; cin >> a >> b >> c;
    if ( a == 0) {
        if ( b != 0 ) cout << "Phuong trinh co nghiem duy nhat x = " << setprecision(2) << fixed << (-c) / b << endl;
        else {
        if ( b != 0) cout << "Phuong trinh vo nghiem!\n";
        else cout << "Phuong trinh co nghiem dung voi moi x!\n";
        }
    }
    else{
        D = pow(b,2) - 4*a*c;
        if (D > 0) {
            x1 = (-b + sqrt(D)) / 2*a;
            x2 = (-b - sqrt(D)) / 2*a;
            cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << setprecision(2) << fixed << x1 << " , x2 = " << x2 << endl;
        }
        else if ( D == 0) cout << "Phuong trinh co 1 nghiem (kep): x= " << setprecision(2) << fixed << -b / 2*a << endl;
        else  cout << "Phuong trinh vo nghiem!\n";
    }
}
