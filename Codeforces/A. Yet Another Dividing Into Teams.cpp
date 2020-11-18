#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int v[n + 1];
    for (int i = 0 ; i <= n ; i++) v[i] = 0 ;
    for (int i = 1 ; i <= n ; i++) cin >> v[i] ;
    sort(v + 1 , v + n + 1 ) ;
    int ans = 0 ;
    for (int i = n ; i >= 1 ; i-- ) {
        if (v[i] >= n - i + 1) ans = n - i + 1 ;
    }
    cout << ans << endl ;
}
int32_t main()
{
    int testcases = 1 ;
    cin >> testcases ;
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