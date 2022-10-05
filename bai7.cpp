#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*factorial(n-1);
}

float  tongNDGT(int n) {
    float sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 1/ (float) factorial(i);
    }

    return sum;
}

int tich(int n) {
    int p = 1;
    for(int i = n; i > 0; i -= 2) {
        p *= i;
    }

    return p;
}

int main() {
    int n;
    cin >> n;
    cout <<  tongNDGT(n) << endl;
    cout << tich(n) << endl;

    return 0;
}
 