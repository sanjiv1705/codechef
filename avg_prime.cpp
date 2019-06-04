#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i , t ;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
        int x , y , l=0;
        cin>>x>>y;
        int sum ;
        sum = x+y;
        int k , j;

        for(j=1 ; j<1000 ; j++)
        {       int m = sum + j;
           for(k=2 ; k<m/2; k++)
           {
               if(m%k==0)
               {
                   l=1;
                   break;
               }

           }
           if(l==0)
           {

            cout<<j;
            break;
        }

    }
}}
