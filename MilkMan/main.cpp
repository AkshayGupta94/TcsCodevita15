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
  int count=0;int count2=0;
   for(int i=0;i<n;i++)
   {
    int temp;int temp2;
    temp2=a[i];
    count = temp2/10;
    temp2 = temp2%10;
    count += temp2/7;
    temp2 = temp2%7;
    count += temp2/5;
    temp2 = temp2%5;
    count += temp2/1;
    temp2=a[i];
    count2 = temp2/7;
    temp2 = temp2%7;
    count2 += temp2/5;
    temp2 = temp2%5;
    count2 += temp2/1;
    if(count2>count)
        cout<<count<<endl;
    else
        cout<<count2<<endl;
   }
}
