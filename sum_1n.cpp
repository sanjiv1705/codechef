
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   int i , n , rem , left;
   cin>>n;
   int a[n];
   for(i=0 ; i<n ; i++)
   {
       cin>>a[i];
       cout<<endl;
       }
       for(i=0; i<n; i++)
      {

      rem = a[i]%10;
       int sum = 0;
          while(a[i]!=0)
            {
                left = a[i]%10 ;
                sum = left +rem;
                a[i]=a[i]/10;
            }
            cout<<sum<<endl;
                 }
}
