// https://codeforces.com/contest/1031/problem/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int w , h , k ;
    cin >> w >> h >> k ;
    int ans = 2 * (w + h) - 4 ; 
    for (int i = 0 ; i < k - 1 ; i++) {
        ans += (2*(w - 4 + h - 4) - 4 ) ;
        w -= 4 , h -= 4 ;
    }
    cout << ans << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0  ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/