#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int t, i, count1=0;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
        long long int x1, x2, x3, y1, y2, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        int a=(x2-x1)*(x2-x1) +(y2-y1)*(y2-y1);
        int b =(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
        int c =(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
        if(a+b==c || b+c==a || c+a==b )
            count1++;
    }
    cout<<count1<<endl;

}


