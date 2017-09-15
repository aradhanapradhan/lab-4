#include<iostream>
using namespace std;
int find(int x,int y)
{
   int r,c=0;
   for(int i=x;i<=y;i++)
   {
      for(int j=2;j<i;j++)
      {
        r=i%j;
        if(r==0)
         c=c+1;
        else
         c=0;
      }
      if(c==0)
        cout<<i;
   }
}
int main()
{
   int a,b;
   cout<<"enter the interval";
   cin>>a>>b;
   find(a,b);
}

