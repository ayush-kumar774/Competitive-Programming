// https://codeforces.com/contest/1401/problem/B
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define int long long
#define endl '\n'

void solve() {
    int a[3], b[3] ;
    for (int i = 0 ; i < 3 ; i++) cin >> a[i] ;
    for (int i = 0 ; i < 3 ; i++) cin >> b[i] ;
    int m = 0 ;
    m = min ( a[0] , b[2] ) ;
    a[0] -= m ;
    b[2] -= m ;
    m = min (a[1] , b[0]) ;
    a[1] -= m ;
    b[0] -= m ;
    m = min (a[2] , b[1]) ;
    a[2] -= m ;
    b[1] -= m ;

    int sum = 2 * m ;
    sum -= 2 * min (a[1] , b[2]) ;
    cout << sum << endl ;
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