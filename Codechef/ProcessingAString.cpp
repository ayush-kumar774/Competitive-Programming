//https://www.codechef.com/problems/KOL15A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int 
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti testcase;
        cin >> testcase ;
        while(testcase--)
        {
                string s;
                aakriti sum = 0 , x = 0;
                cin >> s ;
                for(int i = 0; i < s.size(); i++)
                {
                        if(int(s[i]) >= 48 and int(s[i]) <= 57)
                        {
                             x = int(s[i]) - 48 ;
                             sum += x ;
                        }
                }
                cout << sum << endl ;
        }
}