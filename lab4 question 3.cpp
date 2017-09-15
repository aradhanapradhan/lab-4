#include<iostream>
using namespace std;
int max(int x,int y)
 {
   if(x>y)
      return x;
   else
      return y;
 }
int main()
 {
   int a,b;
   cout<<"enter 2 numbers";
   cin>>a>>b;
   int k=max(a,b);
   cout<<"maximum number is="<<k;
   return 0;
 }

