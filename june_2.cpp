#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t , i ;
    cin>>t;
    for(i= 0 ; i<t;i++)
    {
    long long  int n , j , m;
        cin>>m;
     long long  int sum = 0;
        n =m;
        while(n!=0)
        {
           int rem = n%10;
            sum = sum + rem;
            n = n/10;
        }


      long long int s ,t;
       for(j = 0 ; j<10 ; j++)
       {
           if((sum+j)%10==0)
           {

            cout<<m<<j<<endl;
            break;}
       }

              } }
