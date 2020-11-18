// https://codeforces.com/problemset/problem/1345/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

/* We can solve only only in three cases 1. n == 1 , 2. m == 1 and 3. n == m == 2 */

void solve()
{
    int n , m ;
    cin >> n >> m ;
    if (n == 1 or m == 1) cout << "YES" << endl ;
    else if (n == 2 and m == 2) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}

int32_t main()
{
    fast ;
    int testcases ;
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