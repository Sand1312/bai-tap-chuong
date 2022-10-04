#include "iostream"
#include "math.h"
int32_t main(){
    float a;
    const float pi=3.141592;
    std::cout<<"Ban kinh hinh tron: ";std::cin>>a;
    std::cout<<"Dien tich hinh tron: "<<a*a*pi;
    std::cout<<"\nChu vi duong tron: "<<2*a*pi;
    std::cout<<"\n\n\n\nDien tich hinh tron: ";std::cin>>a;
    std::cout<<"Ban kinh hinh tron: "<<sqrt(a/pi);
}
