#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j , t;
    cin>>t;
    for(j=0 ; j<t ;j++)
    {
        char ch ;
        int n ,i;
        cin>>n;
        char a[n];
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        cin>>ch;
        int m=0,q=0;
         for(i=0 ; i<n ; i++)
         {
             if(a[i]!=ch)
                m++;
             else
             q++;

         }
         if((ch==a[0]||ch==a[n-1])&&q==1)
         {
             cout<<n<<endl;
         }
         else if(q==1)
         {
             int a = n*(n+1)/2 -((n-3)*(n-2)/2)-m;
             cout<<a<<endl;
         }
         else
         {
             int b =  n*(n+1)/2 -((n-3)*(n-2)/2)-m + (n-3)*q;
             cout<<b<<endl;
         }

    }
}
