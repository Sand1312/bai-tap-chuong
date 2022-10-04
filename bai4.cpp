#include "iostream"
int32_t main(){
 float a,b;
 std::cout<<"Diem cua hoc sinh M: \nDiem Toan: ";
 std::cin>>a;while(a<=0||a>10) {std::cout<<"Error 107, Please type again!!\nDiem Toan: ";std::cin>>a;}
    std::cout<<"Diem Van: ";b+=3*a;
 std::cin>>a;while(a<=0||a>10) {std::cout<<"Error 107, Please type again!!\nDiem Van: ";std::cin>>a;}
    std::cout<<"Diem Ly: ";b+=2*a;
 std::cin>>a;while(a<=0||a>10) {std::cout<<"Error 107, Please type again!!\nDiem Ly: ";std::cin>>a;}
    std::cout<<"Diem Hoa: ";b+=2*a;
 std::cin>>a;while(a<=0||a>10) {std::cout<<"Error 107, Please type again!!\nDiem Hoa: ";std::cin>>a;}
    std::cout<<"Diem Sinh: ";b+=a;
 std::cin>>a;while(a<=0||a>10) {std::cout<<"Error 107, Please type again!!\nDiem Sinh: ";std::cin>>a;}
    std::cout<<"Diem Anh: ";b+=a;
 std::cin>>a;while(a<=0||a>10) {std::cout<<"Error 107, Please type again!!\nDiem Anh: ";std::cin>>a;}
                            b+=2*a;
 std::cout<<"Diem trung binh cua hoc sinh M: "<<b/11;
}
