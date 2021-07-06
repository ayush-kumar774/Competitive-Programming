// https://codeforces.com/problemset/problem/1152/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n, m , counter = 0 ;
    cin >> n >> m ;
    int chests[n] , keys[m] ;
    for(auto &x : chests) cin >> x ;
    for(auto &x : keys) cin >> x ;
    int c0 = 0, c1 = 0;
    for(int i = 0; i < n; ++i)
        if ( chests[i] % 2 == 0 )
            ++c0;
        else
            ++c1;
 
    int k0 = 0, k1 = 0;
    for(int i = 0; i < m; ++i)
        if ( keys[i] % 2 == 0 )
            ++k0;
        else
            ++k1;
 
    int ans = min(c1, k0) + min(c0, k1);
    cout << ans << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}

/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/