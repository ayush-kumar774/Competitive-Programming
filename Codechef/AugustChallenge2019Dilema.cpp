#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    aakriti n,m,t,l=0,i,j=0,k=1;
    string s;
    cin>>t;
    while(t>0)
    {
        k=1;
        cin>>s;
        n=0;
        n=s.length();
        while(k!=0)
        {
            k=0;
            for(i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    k=1;
                    s[i]='2';
                    l=0;
                    if(s[i+1]=='1')
                    {
                        s[i+1]='0';
                        l=1;
                    }
                    if(s[i+1]=='0' && l==0)
                    {
                        s[i+1]='1';
                    }
                    l=0;
                    if(s[i-1]=='1')
                    {
                        s[i-1]='0';
                        l=1;
                    }
                    if(s[i-1]=='0' && l==0)
                    {
                        s[i-1]='1';
                    }
                }
            }
        }
        j=0;
        for(i=0;i<n;i++)
        {


            if(s[i]!='2')
            {
                j=1;

            }
        }
        if(j==1)
        {
            cout<<"LOSE"<<endl;
        }
        if(j==0)
        {
            cout<<"WIN"<<endl;
        }
        t--;
}
}
