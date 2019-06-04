#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int i, n,j,k=0, r , m=0;
    cin>>n;
    int a[n] , b[n];
    for(i = 0 ; i<n ; i++)
        cin>>a[i];
        sort(a , a+n);

         for(i = n-1 ; i>0 ; i--)
         {
           if(a[i]==a[i-1])
              k=1;
             else if(a[i]!=a[i-1])
                {k=0;
                r=a[i-1];
             break;

         }}
         if(k==1)
            cout<<0<<endl;
         else
            cout<<r<<endl;


}



