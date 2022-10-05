/* Ho va ten: Trinh Huy Hoang
MSV: N21DCCN124
Lop: D21CQCN02-N
*/
#include <bits/stdc++.h>
using namespace std;
void toLowerCase() {

    string s1 = "";
    string s;

    cout << "Nhập một chuỗi: ";
    cin >> s;

    for (int i = 0; i < s.length() ; i++) {
        s1 += tolower(s[i]);
    }

    cout << "Chuỗi sau chữ thường: " << s1 << endl;
}

void solvingFirstDegreeEquations() {
    float a, b;
    cout << "Nhập 2 tham số của phương trình ax + b = 0:";
    cin >> a >> b;
    if (a != 0) {
        float x = - b / a;
        cout << "Phương trình có nghiệm duy nhất x = " << x << endl;
    }
    else {
        if (b != 0) {
            cout << "Phương trình vô nghiệm." << endl;
        }
        else {
            cout << "Phương trình luôn đúng với mọi biến x." << endl;
        }
    }
}

void solvingQuadraticEquations() {
    float a, b, c;
    cout << "Nhập 3 tham số của phương trình ax ^ 2 + bx + c = 0:";
    cin >> a >> b >> c;

    if( a != 0) {
        float delta = pow(b, 2) - 4 * a * c;
        if(delta < 0) {
            cout << "Phương trình không có nghiệm!" << endl;
        }
        else {
            if(delta == 0) {
                float x = - b / (2 * a);
                cout << "Phương trình có nghiệm duy nhất x = " << x << endl;
            }
            else {
                float x1 = (-b - sqrt(delta)) / (2 * a);
                float x2 = (-b + sqrt(delta)) / (2 * a);
                cout << "Phương trình có 2 nghiệm phân biệt là x1 = " << x1 << ", x2 = " << x2 << endl; 
            }
        }
    }
    else {
        if(b != 0) {
            float x = -b / c;
            cout << "Phương trình có nghiệm duy nhất x = " << x << endl;
        }
        else {
            if(c != 0) {
                cout << "Phương trình không có nghiệm!" << endl;
            }
            else {
                cout << "Phương trình luôn đúng với mọi biến x." << endl;
            }
        }
    }
}

void theMinOf4Int() {
    int a, b, c, d;
    cout << "Nhập 4 số nguyên:";
    cin >> a >> b >> c >> d;
    cout << min(min(a, b), min(c, d));
}

void swappingTwoValue() {
    int a,b;
    cout << "Nhập hai số nguyên: ";
    cin >> a >> b;
    cout << "a = " << a << " , b = " << b << endl;
    cout << "Hoán đổi ..." << endl;
    int c = a;
    a = b;
    b = c;
    cout << "a = " << a << " , b = " << b << endl;
}

void sortFourIntegersASC() {
    int arr[4];
    cout << "Nhập 4 số nguyên:";

    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
  
    
    sort(arr, arr + n);
  
    cout << endl << "Mảng sau khi sắp xếp bằng cách sử dụng sắp xếp mặc định là: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}


int main() {
    int n;

    do {
        cout << endl << "1.Hàm đổi một ký tự hoa sang ký tự thường;" << endl;
        cout << "2. Thủ tục giải phương trình bậc nhất;" << endl;
        cout << "3.Thủ tục giải phương trình bậc hai;" << endl;
        cout << "4. Hàm xác định giá trị nhỏ nhất của 4 số nguyên;" << endl;
        cout << "5. Thủ tục hoán vị hai số nguyên;" << endl;
        cout << "6. Thủ tục sắp xếp 4 số nguyên tăng dần." << endl;
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