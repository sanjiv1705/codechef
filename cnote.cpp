#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , i ;
    cin>>t;
    for(i=0 ; i<t ;i++)
    {
        int x , y , k , n , j;
        cin>>x>>y>>k>>n;
        int a[n] , b[n];
        for(j=0 ; j<n ; j++ )
        {
            cin>>a[j] >> b[j];

        }
        int count1 = 0;
        for(j=0 ; j<n ; j++ )
        {
            if(a[j]>=(x-y) && b[j]<=k)
              count1=1;
               }

               if(count1 == 1)
                    cout<<"LuckyChef"<<endl;
                else
                    cout<<"UnluckyChef"<<endl;



    }

}
