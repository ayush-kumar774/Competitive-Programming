#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve() {
    string s ;
    cin >> s ;
    if (s == "SSS") cout << 0 << endl ;
    else if (s == "RRR") cout << 3 << endl ;
    else if (s == "RRS" or s == "SRR") cout << 2 << endl ;
    else cout << 1 << endl ;
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