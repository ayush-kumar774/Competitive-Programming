//http://codeforces.com/problemset/problem/266/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t ;
    cin >> n >> t ;
    string s;
    cin >> s ;
    while(t--)
    {
        int i = 0;
        while(i != s.size() )
        {
            if ( s[i] == 'B' and s[i + 1] == 'G' )
            {
                swap ( s[i], s[i + 1] );
                i += 2;
            }
            else i++;
        }
    }
    cout << s ;
    return 0 ;
}
