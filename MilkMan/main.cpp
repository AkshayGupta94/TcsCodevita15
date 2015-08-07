#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int *a;
   a = new int[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];

   }
  int count=0;
   for(int i=0;i<n;i++)
   {
       int temp;
    count = a[i]/10;
    a[i] = a[i]%10;
    count += a[i]/7;
    a[i] = a[i]%7;
    count += a[i]/5;
    a[i] = a[i]%5;
    count += a[i]/1;
    cout<<count<<endl;
   }
}
