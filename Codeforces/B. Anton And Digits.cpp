// https://codeforces.com/problemset/problem/734/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int k2, k3, k5, k6 ;
    cin >> k2 >> k3 >> k5 >> k6 ;
    int a = min ( k2, min ( k5, k6 ) ) ;
    int sum = a *  256 ;
    k2 -= a ;
    if(k2 <= 0) {
        cout << sum << endl ;
    }
    else
    {
        int b = min(k2, k3) ;
        sum += b * 32 ;
        cout << sum << endl ;
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
    return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/
