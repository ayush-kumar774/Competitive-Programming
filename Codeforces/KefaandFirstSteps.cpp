// https://codeforces.com/problemset/problem/580/A

// In the name of Aadi Shakti

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;
    int cnt = 1 , ans = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(v[i] >= v[i - 1] ) cnt++ ;
        else ans = max(ans, cnt), cnt = 1 ;
    }
    ans = max(ans, cnt) ;
    cout << ans << endl ;
}

int32_t main()
{
    fast;
    int testcase  = 1 ;
    //cin >> testcase ;
    while(testcase--)
    {
        solve();
    }
    return 0 ;
}