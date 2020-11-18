#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , x , y ;
    cin >> n >> x >> y ;
    string s ;
    cin >> s ;
    int ans = 0 ;
    for (int i = n - x ; i < n ; i++) {
        if (i == n - y - 1) ans += s[i] != '1' ;
        else ans += s[i] != '0' ;
    }
    cout << ans << endl ;
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