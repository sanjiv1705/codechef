#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t , i;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
        int n , j , k ;
        cin>>n;
        char a[20][n], b[20][n];
        for(j=0 ; j<n ; j++ )
            cin>>a[j]>>b[j];
        for(j= 0 ; j<n ; j++)
        { int l = 0;
            for(k=0 ; k<n ; k++)
            {
                if(strcmp(a[j] , a[k])==0)
                  {

                    l=1;
                    break;}
            }
            if(l==1)
                cout<<a[j]<<" "<<b[j]<<endl;
            else
                cout<<a[j]<<endl;
        }




    }
}
