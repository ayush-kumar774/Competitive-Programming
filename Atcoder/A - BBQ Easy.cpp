#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    int ans = 0 ;
    vector<int> v(2 * n) ;
    for (auto &x : v) cin >> x ;
    sort(v.begin(), v.end()) ;
    for (int i = 0 ;  i < 2 * n ; i += 2) {
        ans += v[i] ;
    }
    cout << ans << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    // cin >> testcases ;
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