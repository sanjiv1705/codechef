#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int b[1000000];
int main()
{
     long long int p = 1;
     long long int q=0;


        for( int j = 0 ; j<1000000 ; j++)
        {
          q = p*(j+3)+(j+2);
           p=q;
           p=p%1000000007;
           b[j]=p;}


    int t , i ;
    cin>>t;

    for(i=0 ; i<t; i++)
    {
        int  n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
      else
     cout<<b[n-2]<<endl;
        }




    }

