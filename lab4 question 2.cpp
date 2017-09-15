#include<iostream>
using namespace std;
float d, cir, area;
float circle(float r)
 {
     
     d=r/2;
     cir=2*r*3.14;
     area=3.14*r*r;
    return d;
 }
int main()
 {
     float x,y;
     cout<<"enter radius of circle";
     cin>>x;
     circle(x);
     cout<<"diameter="<<d;
     cout<<"circumference="<<cir;
    cout<<"area="<<area;
     return 0;
 }
    
 
  
    
  
