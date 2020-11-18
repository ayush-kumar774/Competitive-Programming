// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n , k ;
    cin >> k >> n ;
    cout << k - ( n % k ) << endl ;
}

int32_t main()
{
    int testcase  = 1 ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}