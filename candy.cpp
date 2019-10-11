#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
   long long int t , i ;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
       long long int a , b , c ,d;   // declaring integer variables
        cin>>a>>b>>c>>d;  //inputing 4 integer variables
       long long int l , m;
        l = a/d;    //the value of l is a divison d
        m = l/b;
      long long int p = l + m*c;
        cout<<"the value of p is"<<p<<endl;
    }
}
