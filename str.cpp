#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n ;
    cin>>n;
    char a[n];
    cin>>a;
    int l = 0 , m = 0;
    for(i = 0 ; i<=n ; i++)
    {
        if((a[i]=='R'&&a[i+1]=='U')||(a[i]=='U' && a[i+1]=='R'))
            {
                l++;
                i=i+2;
            }
        else
            m++;

    }
    cout<<l+m<<endl;
}
