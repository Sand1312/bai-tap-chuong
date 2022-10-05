#include <bits/stdc++.h>
using namespace std;
int daonguoc(int a) {
    int res =0, fes;
    while (a > 0) {
        fes = a % 10;
        res = res * 10 + fes;
        a = a / 10;
    }
    return res;
}

bool doixung(int a) {
    string b = to_string(a);
    for ( int i = 0; i < b.size()/2; i++ ) {
       if (b[i] != b[b.size()-1-i]) {
        return false;
        break;
       }
    }
    return true;
}

bool chinhphuong(int a) {
    int b = sqrt(a);
    if (b*b == a) {
        return true;
    }
    else {
        return false;
    }
}

bool nguyento(int a) {
    for (int i = 2; i < sqrt(a); i++) {
        if (a % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

int sole(int a) {
    int sum = 0, temp;
    while (a > 0) {
        temp = a % 10;
        if (temp % 2 != 0) {
            sum += temp;
        }
     a = a /10;
    }
    return sum;
}

int tongnguyento(int a) {
    int sum = 0, temp;
    while (a > 0) {
        temp = a % 10;
        if (temp == 1 || temp == 2 || temp == 3 || temp == 5 || temp == 7) {
            sum += temp;
        }
        a = a/10;
    }
    return sum;
}

int tongchinhphuong (int a) {
    int sum =0, temp;
    while (a > 0) {
        temp = a % 10;
        if (temp == 9 || temp == 4 || temp == 1) {
            sum += temp;
        }
        a = a/10;
    }
    return sum;
}

int sohoanchinh(int a) {
    int count = 0;
    while (a > 0) {
        a = a/10;
        count++;
    }
    return count;
}
bool armStrongNum(int a) {
    int count = sohoanchinh(a);
    int sum =0, temp = a, last;
    for (int i = 0; i < count; i++) {
        last = temp % 10;
        temp = temp / 10;
        sum += pow(last, count);
    }
    if (sum == a) {
        return true;
    }
    else { 
        return false;
    }
}
int main() {
    int a;
    cin >> a;
    cout << daonguoc(a);
    cout << endl;
    if (doixung(a)) {
        cout << a << "Doi xung" << endl;
    }
    else {
        cout << a <<"Khong doi xung" << endl;
    }
    if (chinhphuong(a)) {
        cout << a << " la so chinh phuong" << endl;
    }
    else {
        cout << a <<" khong phai so chinh phuong" << endl;
    }
    if (chinhphuong(a)) {
        cout << a <<" la so nguyen to" << endl;
    }
    else {
        cout << a <<" khong phai So nguyen to" << endl;
    }
    cout << sole(a) << endl;
    cout << tongnguyento(a) << endl;
    cout << tongchinhphuong(a) << endl;
    if (armStrongNum(a)) {
        cout << a << " la so armstrong" << endl;
    }
    else {
        cout << a <<" khong phai so armstrong" << endl;
    }
}