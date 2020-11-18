// https://codeforces.com/problemset/problem/1272/A

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
    for (auto &x : v) cin >> x ;
    for (int i = 0 ; i < n ; i++) {
        if ( v [ v [ v [ i  ] - 1 ] - 1 ] - 1 == i) {
            cout << "YES" << endl ;
            return ;
        }
    }
    cout << "NO" << endl ;
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