#include "iostream"
int32_t main(){
 float a,b;
 std::cout<<"So thu nhat: ";std::cin>>a;
 std::cout<<"So thu hai: ";std::cin>>b;
 std::cout<<"Tong= "<<a+b<<"\nHieu= "<<a-b<<"\nTich= "<<a*b<<((b!=0)? "\nThuong= ":"\0");if (b!=0) std::cout<<a/b;
 std::cout<<"\nGia tri trung binh: "<<(a+b)/2;
}
