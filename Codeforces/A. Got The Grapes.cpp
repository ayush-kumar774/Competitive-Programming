// https://codeforces.com/problemset/problem/1114/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int x , y , z , a , b , c , rem  = 0 ;
    cin >> x >> y >> z >> a >> b >> c ;
    if ( ( x + y + z ) > ( a + b + c ) ) cout << "NO" << endl ;
    else {
        a -= x ;
        if (a >= 0) {
            if ((a + b) >= y) {
                rem = (a + b) - y ;
                if ( (rem + c) >= z) cout << "YES" << endl ;
                else cout << "NO" << endl ;
            }
            else cout << "NO" << endl ;
        }
        else cout << "NO" << endl ;
    }
}

int32_t main()
{
    fast;
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