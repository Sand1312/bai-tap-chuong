#include<bits/stdc++.h>

using namespace std;

void nhap_mang(int arr[],int n) {
for(int i=1; i <= n; i++) {
    cin >> arr[i];
}
}
void xuat_mang(int arr[],int n) {
for(int i=1 ;i <=n ; i++) {
    cout << arr[i] << " ";
}
}
int kt_mang_doi_xung(int arr[],int n) {
    int count = 0;
    for(int i = 1;i <= n/2 ;i++) {
        if(arr[i] != arr[(n+1)-i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    cout << "Nhap do rong cua mang: " << endl;
    cin >> n;
    int arr[n];
    nhap_mang(arr,n);
    cout << kt_mang_doi_xung(arr,n);

    return 0;
}