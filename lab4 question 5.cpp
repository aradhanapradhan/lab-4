#include<iostream>
using namespace std;
void prime(int n)
 {
   int r,c=0;
   for(int i=2;i<n;i++)
   {
      r=n%i;
      if(r==0)
        c=c+1;
      else
        c=0;
   }
   if(c==0)
      cout<<"the number is prime "<<n;
   else
      cout<<"the number is not prime "<<n;
   
 }
void armstrong(int w)
 {
   int k=w,re,cu,su=0;
   while(k>0)
   {
      re=k%10;
      cu=re*re*re;
      su=su+cu;
      k=k/10;
   }
   if(su==w)
     cout<<"armstrong number "<<w;
   else
     cout<<"not an armstrong number "<<w;
 }
void perfect(int g)
 {
   int s=0,m=g,t,i;
   for(i=1;i<g;i++)
   {
     t=g%i;
     if(t==0)
       s=s+i;
   }
   if(m==s)
     cout<<"perfect number "<<m;
   else
     cout<<"not perfect number "<<m;
   
 }

int main()
{
   int l;
   cout<<"enter a number";
   cin>>l;
   prime(l);
   armstrong(l);
   perfect(l);
}     
  















