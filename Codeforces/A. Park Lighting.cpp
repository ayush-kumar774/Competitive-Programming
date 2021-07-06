// https://codeforces.com/problemset/problem/1358/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

/* If any of the input is even then the number of required lights will be
    n * m / 2 and if both are odd then first we have to lit (n -1) * m lights
    then (m * 1 ) lights . Collectively ceil(n*m+1 / 2) will be the answer 
*/

void solve()
{
    int n , m ;
    cin >> n >> m ;
    int ans = ceil( ( n * m + 1) / 2) ;
    cout << ans << endl ;
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