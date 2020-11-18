// https://codeforces.com/contest/1043/problem/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) ;
    for (auto &x : v) cin >> x ;
    sort(v.begin() , v.end()) ;
    if (k == 0 and v[0] > 1) { cout << 1 << endl ; return ; }
    int ans = v[k - 1] ;
    int counter = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (ans >= v[i]) {
            counter++ ;
        }
    }
    // cout << counter << endl ;
    if (counter > k) {
        cout << -1 << endl ;
    }
    else {
        cout << ans << endl ;
    }
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