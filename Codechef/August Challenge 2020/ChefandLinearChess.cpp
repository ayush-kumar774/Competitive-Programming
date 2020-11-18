// https://www.codechef.com/AUG20B/problems/LINCHESS
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve() {
    int n , k ,ans = 0 ;
    cin >> n >> k ;
    vector <int> v(n) ;
    for(auto &x : v) cin >> x ;
    int minn = 999999999999999 ;
    for (int i = 0 ; i < n ; i++) {
        if (k < v[i]) continue ;
        else if (k % v[i] == 0 ) {
            int d = k / v[i] ;
            if (minn > d ) {
                minn = d ;
                //cout <<"Ans " << d << endl ;
                ans = v[i] ;
            }
        }
    }
    if (ans == 0) cout << -1 << endl ;
    else cout << ans << endl  ; 
}

int32_t main() {
    fast;
    int testcases = 1 ;
    cin >> testcases ;
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
