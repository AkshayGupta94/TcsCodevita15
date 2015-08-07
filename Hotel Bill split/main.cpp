#include <iostream>

using namespace std;

int main()
{
   int n,x,flag=0;
   cin>>n;
   int *a;
   a = new int[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   cin>>x;
   for(int i=0;i<n-2;i++)
   {
       flag=0;
       for(int j=i+1;j<n-1;j++)
       {
         for(int k=j+1;k<n;k++)
         {
             if(x==a[i]+a[j]+a[k])
             {
                 flag=1;
                  cout<<"["<<a[i]<<","<<a[j]<<","<<a[k]<<"]";
                 break;
             }

         }
         if(flag==1)
            break;
       }
       if(flag==1)
            break;
   }

}
