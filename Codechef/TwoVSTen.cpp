//https://www.codechef.com/problems/TWOVSTEN/
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti testcase ;
        cin >> testcase ;
        while(testcase--)
        {
                aakriti x ;
                cin >> x ;
                string s ;
                s = to_string(x);
                if( s[s.size() - 1] == '0') cout << 0 << endl ;
                else if (s[s.size() - 1] == '5') cout << 1 << endl ;
                else cout << -1 << endl ;
        }
}