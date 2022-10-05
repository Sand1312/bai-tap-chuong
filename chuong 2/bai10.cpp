#include<iostream>
using namespace std;
signed main(){
   int a;cin>>a;
   while (a<1||a>7) {cout<<"Moi nhap lai:";cin>>a;}
   if (a==1) cout<<"Sunday";
   else if (a==2) cout<<"Monday";
   else if (a==3) cout<<"Tuesday";
   else if (a==4) cout<<"wednesday";
   else if (a==5) cout<<"Thursday";
   else if (a==6) cout<<"Friday";
   else cout<<"Saturday";
}
