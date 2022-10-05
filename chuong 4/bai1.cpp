#include <bits/stdc++.h>
using namespace std;
void toLowerCase() {

    string s1 = "";
    string s;

    cout << "Nhap mot chuoi: ";
    cin >> s;
    for (int i = 0; i < s.length() ; i++)    s1 += tolower(s[i]);
    cout << "Chuoi sau chu thuong: " << s1 << endl;
}
void solvingFirstDegreeEquations() {
    float a, b;
    cout << "Nhap 2 tham so cua phuong trinh ax + b = 0:";
    cin >> a >> b;
    if (a != 0) {
        float x = - b / a;
        cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
    }
    else {
        if (b != 0) {
            cout << "Phuong trinh vo nghiem." << endl;
        }
        else {
            cout << "Phuong trinh luon dung voi moi bien x." << endl;
        }
    }
}
void solvingQuadraticEquations() {
    float a, b, c;
    cout << "Nhap 3 tham so của phuong trinh ax ^ 2 + bx + c = 0:";
    cin >> a >> b >> c;
    if( a != 0) {
        float delta = pow(b, 2) - 4 * a * c;
        if(delta < 0) {
            cout << "Phuong trinh khong co nghiem!" << endl;
        }
        else {
            if(delta == 0) {
                float x = - b / (2 * a);
                cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
            }
            else {
                float x1 = (-b - sqrt(delta)) / (2 * a);
                float x2 = (-b + sqrt(delta)) / (2 * a);
                cout << "Phuong trinh có 2 nghiem phan biet là x1 = " << x1 << ", x2 = " << x2 << endl; 
            }
        }
    }
    else {
        if(b != 0) {
            float x = -b / c;
            cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
        }
        else {
            if(c != 0) {
                cout << "Phuong trinh khong co nghiem!" << endl;
            }
            else {
                cout << "Phuong trinh luon đung voi moi bien x." << endl;
            }
        }
    }
}

void theMinOf4Int() {
    int a, b, c, d;
    cout << "Nhap 4 so nguyen:";
    cin >> a >> b >> c >> d;
    cout << min(min(a, b), min(c, d));
}

void swappingTwoValue() {
    int a,b;
    cout << "Nhap hai so nguyen: ";
    cin >> a >> b;
    cout << "a = " << a << " , b = " << b << endl;
    cout << "Hoan đoi ..." << endl;
    int c = a;
    a = b;
    b = c;
    cout << "a = " << a << " , b = " << b << endl;
}

void sortFourIntegersASC() {
    int arr[4];
    cout << "Nhap 4 số nguyen:";

    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
  
    
    sort(arr, arr + n);
  
    cout << endl << "Mang sau khi sap xep bang cach su dung sap xep mac đinh là: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}


int main() {
    int n;

    do {
        cout << endl << "1.Ham đoi mot ky tu hoa sang ky tu thuong;" << endl;
        cout << "2. Thu tuc giai phuong trinh bac nhat;" << endl;
        cout << "3.Thu tuc giai phuong trinh bac hai;" << endl;
        cout << "4. Ham xac đinh gia tri nho nhat cua 4 so nguyen;" << endl;
        cout << "5. Thu tuc hoan vi hai so nguyen;" << endl;
        cout << "6. Thu tuc sap xep 4 so nguyen tang dan." << endl;
        cout << "0. Exit program." << endl << endl;
 
        cout << "Chon cau hoi: ";
        cin >> n;

        switch (n)
        {
        case 1:
            toLowerCase();
            break;
        case 2:
            solvingFirstDegreeEquations();
            break;
        case 3:
            solvingQuadraticEquations();
            break;
        case 4:
            theMinOf4Int();
            break;
        case 5:
            swappingTwoValue();
            break;
        case 6:
            sortFourIntegersASC();
            break;
        default:
            break;
        }
        

    }
    while(n != 0);
    

    return 0;
}
