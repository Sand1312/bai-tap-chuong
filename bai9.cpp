#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int &N) {
    cout << "Nhap " << N << " gia tri cho mang: " << endl;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
}

void xuat(int a[], int N) {
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
}


int main() {
    int arr[10000];
    int n;
    cin >> n;
    nhap(arr, n);
    xuat(arr, n);
    return 0;
}