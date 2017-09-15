#include<iostream>
using namespace std;
int a,b;
int check(int x)
 {
   if(x%2==0)
     a=x;
   else
     b=x;
   return a;
   return b;
 }
int main()
 {
   int y;
   cout<<"enter a number";
   cin>>y;
   check(y);
   cout<<"odd="<<b;
   cout<<"even="<<a;
   return 0;
 }


