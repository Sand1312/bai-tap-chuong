#include<bits/stdc++.h>
using namespace std;

long tongLe(int N) {
    long tongLe = 0;
    for(int i = 1; i <= N; i++) {
        if (i % 2 == 1) {
            tongLe += i;
        }
    }

    return tongLe;
}

int main() {
    int n;  
    cin >> n;
    if(n > 0) {
        cout  << tongLe(n);
    }
    else {
        cout << "Gia tri nhap vao phai la so duong, moi nhap lai" << endl;
    }

    return 0;
}