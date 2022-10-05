#include<bits/stdc++.h>
using namespace std;

void nhap(int *a, int &n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(int *a, int &n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int timNhoNhat(int *a, int &n) {
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    return min;
}

double trungbinh(int *a, int &n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / (double) n;
}

int timkiem(int *a, int &n, int k) {
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            return k;
        }
    }

    return -1;
}

int main() {
    int arr[10000];
    int n;
    cout << "Nhap so phan tu muon nhap: ";
    cin >> n;
    nhap(arr, n);
    int k = trungbinh(arr, n);
    cout << "Gia tri nho nhat: " << timNhoNhat(arr, n) << endl;
    cout << "Gia tri trung binh: " << k << endl;

    cout << "Nhap so can tim kiem: ";
    cin >> k;
    if (timkiem(arr, n, k) != -1) {
        cout << "So " << k << " co xuat hien trong mang" << endl;
    }
    else {
        cout << "So " << k << " khong xuat hien trong mang" << endl;

    }
    return 0;
}