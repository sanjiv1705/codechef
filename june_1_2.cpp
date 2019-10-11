
 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int t , j ;
    cin>>t;
    for(j=0 ; j<t ; j++ )
    {
        float  d ;
        int i;
        cin>>d;
        string s;
        cin>>s;
        float c= 0;
          for(int k= 0 ; k<d;k++)
        {
            if(s[k]=='P')
                c++;
        }


        if((c/d)>=0.75)
            cout<<0<<endl;
            else{
            int m = 0;
            int l =0;
            float f=0;


        for(int k= 0 ; k<d;k++)
        {
            if(s[k]=='P')
                f++;



        if((f/d)>=0.75)
        {int m = 1;
            break;
         cout<<"out of the main loop"<<endl;
        }
       else{
        for(i= 2 ; i<d-2; i++)
        {
            if(s[i]=='A')
            {


            if(((s[i-2]||s[i-1])&&(s[i+1]||s[i+2])=='P'))
              {

                l++;} }}}
        }


        if(m ==1)
            cout<<l<<endl;
        else
            cout<<-1<<endl;


    }
}}
