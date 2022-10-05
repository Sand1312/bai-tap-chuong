#include<iostream>
using namespace std;
signed main(){
   int a;cin>>a;
   while (a<1||a>12) {cout<<"Moi nhap lai:";cin>>a;}
   if (a==1||a==2||a==12) cout<<"Winter";
   else if (a>2&&a<6) cout<<"Spring";
   else if (a>5&&a<9) cout<<"Summer";
   else cout<<"Autumn";
}
