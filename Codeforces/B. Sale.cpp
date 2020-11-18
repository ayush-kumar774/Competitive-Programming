#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
    int n , m ;
    cin >> n >> m ;
    vector<int> v(n) ;
    for(auto &x : v) {
        cin >> x ;
    }
    sort(v.begin(), v.end()) ;
    int ans = 0 ;
    for (int i = 0 ; i < m ; i++) {
        if (v[i] < 0) {
            ans += (abs(v[i])) ;
        }
    }
    cout << ans << endl ;
}

int32_t main () {
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
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