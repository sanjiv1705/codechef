#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int j,t;

    cin>>t;

    for( j=0 ; j<t ; j++)

    {   int k ,i, n;
         cin>>n;
        int a[n];
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        int p;
        cin>>p;
        k = a[p-1];

        int l =0;
        sort(a,a+n);

        for(i=0; i<n ; i++)
        {
            if(a[i]==k)
            l = i+1;



        }
        cout<<l<<endl;


    }
}
