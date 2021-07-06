// https://codeforces.com/problemset/problem/1096/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int l , r ;
    cin >> l >> r ;
    if (r % l == 0 ) {
        cout << l << " " << r << endl ;
    }
    else {
        int rem = r % l ;
        cout << l << " " << (r - rem) << endl ;
    }
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
