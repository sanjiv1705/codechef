#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t , i ;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
       long long int a , b , c ,d;
        cin>>a>>b>>c>>d;
       long long int l , m;
        l = a/d;
        m = l/b;
      long long int p = l + m*c;
        cout<<p<<endl;
    }
}
