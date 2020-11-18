// https://codeforces.com/problemset/problem/950/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int l, r, a ;
    cin >> l >> r >> a ;
    if (l == r) {
        cout << 2 * (l) + (a / 2) * 2 << endl ;
    }
    else {
        if (l > r) {
            int need = l - r ;
            int b = min(need, a) ;
            r += b ;
            a -= b ;
            if(l == r) cout << 2 * (l) + (a / 2) * 2 << endl ;
            else {
                cout << 2 * r  << endl ;
            }
        }
        else if (l < r) {
            int need = r - l ;
            int b = min(need, a) ;
            l += b ;
            a -= b ;
            if(l == r) cout << 2 * (l) + (a / 2) * 2 << endl ;
            else {
                cout << 2 * l  << endl ;
            }
        }
    }
}
int32_t main()
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
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