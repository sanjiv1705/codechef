#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i , a[4];
    for(i=0 ; i<4 ; i++)
        cin>>a[i];
    int max;
    sort(a , a+4);
    for(i = 0 ; i<3; i++)
    {
        cout<<a[3]-a[i]<<" ";
    }


}
