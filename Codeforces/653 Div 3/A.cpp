#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve()
{
    vector <int > v (3) ;
    for(auto &x : v) cin >> x ;
    sort(v.begin() , v.end() ) ;
    if (v[1] != v[2] ) cout << "NO" << endl;
    else cout << "YES\n" << v[0] << " " << v[0] << " " << v[2] << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--)
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