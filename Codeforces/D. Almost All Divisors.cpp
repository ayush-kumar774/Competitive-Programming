#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for (int i = 0 ; i < n; i++) {
        cin >> v[i] ;
    }
    sort(v.begin(), v.end()) ;
    bool flag = false ;
    int ans = v[0] * v[n - 1] ;
    for (int i = 0 ; i < n ; i++) {
        if (ans % v[i] != 0 ) {
            flag = true ;
            break ;
        }
    }
    vector <int> v2 ;
    for (int i = 2 ; i * i <= ans ; i++ ) {
        if (ans % i == 0 ) {
            v2.push_back(i);
            if (i != ans / i) {
                v2.push_back(ans / i) ;
            }
        }
    }
    sort(v2.begin(), v2.end()) ;
    if (flag) cout << -1 << endl ;
    else if (v2 != v) cout << -1 << endl ;
    else if (v2 == v) cout << ans << endl ;
}
int32_t main()
{
    fast ;
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