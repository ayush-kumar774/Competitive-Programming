// https://codeforces.com/problemset/problem/1108/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int a , b, c, d ;
    cin >> a >> b >> c >> d ;
    int aa = min(a , b) ;
    int bb = max(c , d) ;
    if (aa != bb) cout << aa << " " << bb << endl ;
    else cout << aa << " " << (bb - 1) << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
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