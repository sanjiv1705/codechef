#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j , t;
    cin>>t;
    for(j=0 ; j<t ; j++)
        {
          long long int i , n;
            cin>>n;
           long long int a[n];
          long long int  p=0;
            for(i=0 ; i<n ; i++)
            {
                cin>>a[i];

            }
            sort(a, a+n);
             /*for(i = 0 ; i<n ; i++)
             {
                 if(a[i]==0)
                    p++;
             }*/

            for(i = 0 ; i<n ; i++)
            {
                if(a[i]<=p)
                    p++;
            }
            cout<<p<<endl;
        }
    }
