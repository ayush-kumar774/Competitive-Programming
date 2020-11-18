// https://www.codechef.com/AUG20B/problems/CHEFWARS
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve() {
    int p , h , flag = 0 ;
    cin >> p >> h ;
    while(1) {
        p = p - h ;
        h = h / 2 ;
        if (h <= 0 and p > 0) {
            flag = 1 ;
            break ;
        }
        if (p <= 0) {
            break ;
        }
    }
    if (flag) cout << 0 << endl ;
    else cout << 1 << endl ;
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
