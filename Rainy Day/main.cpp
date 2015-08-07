#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   double m,n,r,x,temp;
   cin>>m;
   cin>>n;
   cin>>r;
   x=0.00;
   for(;n>0;n--)
   {
       x=x+m;
       x=1200*x;
       temp=1200+r;
       x=x/temp;

   }
  x= round(x);
  cout<<x;
}
