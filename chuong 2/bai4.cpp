#include<iostream>
using namespace std;
signed main(){
   int a,b;
   cin>>a>>b;
   if (a!=0) cout<<"nghiem cua phuong trinh= "<<(double) -b/a;
   else if (a==0) cout<<((b==0)?"phuong trinh vo so nghiem":"phuong trinh vo nghiem");
}
