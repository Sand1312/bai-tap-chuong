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

void xuatchan(int *a, int &n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) cout << a[i] << " ";
    }
    cout << endl;
}
void xuatVTchan(int *a, int &n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0) cout << a[i] << " ";
    }
    cout << endl;
}

void thanhle(int *a, int &n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            a[i]++;
        }
        cout << a[i] << " ";
    }
}

int main() {
    int a[10000];
    int n;
    cout << "Nhap so phan tu muon nhap: ";
    cin >> n;
    nhap(a, n);
    xuatchan(a, n);
    xuatVTchan(a, n);
    thanhle(a, n);

    return 0;   
}