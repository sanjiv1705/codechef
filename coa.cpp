#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t ;
    cin>>t ;
    for(i = 0; i<t ; i++)
    {
        int n, j, m =0,p=0, r=0,a =0,b=0, c=0, t=0;
        cin>>n;
        char s[1000];
        for(j = 0 ; j<n; j++)
        {
            cin>>s;
            int k ;
            for(k= 0 ; k<strlen(s); k++)
            {
                if(s[k]=='c' )
                    r++;
                else if(s[k]=='e')
                    m++;
                else if(s[k]=='o' )
                    a++;
                else if(s[k]=='d')
                    b++ ;
                else if(s[k]=='h')
                    c++;
                else if(s[k]=='f')
                    p++;

            }

        }

        int w= r/2;
        int f = m/2;
        int num[6]={w , f ,a, b,c,p};
        sort(num , num+6);
        cout<<num[0]<<endl;
        /*if(f>=w && a>=w && b>=w &&c>=w && p>=w)
            cout<<w<<endl;
        else if(w>f && a>=f && b>=f && c>=f && p >=f  )
            cout<<f<<endl;
            else if(w>f && a>=f && b>=f && c>=f && p >=f  )
        else
            cout<<0<<endl;*/








    }
}
