#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        int n ;
        cin >> n ;
        int v[n] , v2[n];
        for(auto &x : v) cin >> x ;
        cout << (n - 1) / 2 << endl ;
        sort(v, v + n) ;
        int j = 0 ;
        for (int i = 1 ; i < n ; i += 2) {
                v2[i] = v[j] ;
                j++ ;
        }
        for (int i = 0 ; i < n ; i += 2) {
                v2[i] = v[j] ;
                j++ ;
        }               
        for (auto x : v2) cout << x << " " ;
        cout << endl ;
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

