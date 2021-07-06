// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n, counter{0} ;
    cin >> n ;
    string s ;
    s = to_string(n) ;
    int m = count(s.begin(), s.end(), '0');
    cout << s.size() - m << endl ;
}

int32_t main()
{
    fast;
    int testcase  = 1 ;
   // cin >> testcase ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}