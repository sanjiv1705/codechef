#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , j;
    cin>>t;

    for(j = 0 ; j<t ; j++)
        {
            int i , sum = 0;
            char s[1001];
            cin>>s;
            for(i = 0 ; i<strlen(s); i++)
            {
                if(isdigit(s[i]))
                {
                    s[i]-'0';
                    sum = sum + (s[i]-'0');
                }
                cout<<s[i];

            }
            cout<<sum<<endl;
        }
    }
