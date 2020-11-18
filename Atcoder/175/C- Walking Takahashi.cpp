// https://atcoder.jp/contests/abc175/tasks/abc175_c
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
const int MOD = 1000000007 ;
void solve() {
    int x , k , d ;
    cin >> x >> k >> d ;
    x = abs(x) ;
    if( k <= ( x / d ) )
        cout << x - ( k * d ) << endl ;
    else
    {
        k -= x / d;
        if ( k % 2 )
            cout << abs( ( x % d ) - d ) << endl ;
        else
        {
            cout << x % d << endl ;
        }
        
    } 
}

int32_t main() {
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while (testcases--) {
        solve() ;
    }
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
*/