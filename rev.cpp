
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int i , n ;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{cin>>a[i];
cout<<endl;
}
for(i=0;i<n;i++)
{ int rev =0;
while(a[i] !=0)
{int rem;

rem=a[i]%10;
rev = rev*10 +rem;
a[i] = a[i]/10;
}
cout<<rev<<endl;
}
}
