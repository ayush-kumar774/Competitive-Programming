// https://codeforces.com/problemset/problem/965/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int k , n , s , p , np , total ;
    cin >> k >> n >> s >> p ;
    np = (n % s) == 0 ? (n / s) : (n / s ) + 1 ;
    total = ( (k * np) % p == 0 ) ? ( ( k * np ) / p ) : ( ( k * np ) / p ) + 1 ;
    cout << total << endl ;
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