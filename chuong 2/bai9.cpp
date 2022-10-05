#include<iostream>
using namespace std;
signed main(){
   char a,b;
   cout<<"Nguoi choi thu nhat: ";cin>>a;
   cout<<"Nguoi choi thu hai: ";cin>>b;
   if (a==b) cout<<"Hoa";
   else if (a=='B'&&b=='O') cout<<"Nguoi choi thu hai chien thang";
   else if (a<b) cout<<"Nguoi choi thu nhat chien thang";
   else cout<<"Nguoi choi thu hai chien thang";
}
