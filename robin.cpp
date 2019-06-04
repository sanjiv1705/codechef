#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n , q;
   cin>>n>>q;
   long long int i , j ,  a[n] , b[n];
   for(i=1 ; i<=n ;i++)
        cin>>a[i];
   for(j=1 ; j<=n ;j++)
       cin>>b[j];
       int k , l ,r;
       for(k=0 ;k<q; k++)
       {  long long int sum = 0;
           cin>>l>>r;
           for(int p=l ; p<=r; p++)
           {

            sum = sum + a[p]*b[p]; }
            cout<<sum<<endl;
       }




}
