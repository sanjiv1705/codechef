#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;


long long power(long long base  , long long t)
{
     long long result = 1;
    while(t > 0) {

        if(t% 2 == 1) {
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        t = t / 2;
    }
    result = (result *5)%MOD;
    return result;
}
int main()
{
long long int i , t ;
cin>>t;
for(i= 0 ; i<t ; i++)
{
  long long int k;
    cin>>k;
    long long int p ;
    p = power(2,k);
    cout<<p<<endl;
}
}
