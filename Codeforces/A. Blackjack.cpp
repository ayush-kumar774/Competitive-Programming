// https://codeforces.com/problemset/problem/104/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    if(n < 0) cout << 0 << endl ;
    else if (n == 10) cout << 0 << endl ;
    else if (n > 10 and n < 20 ) cout << 4 << endl ;
    else if (n == 20) cout << 15 << endl ;
    else if (n == 21) cout << 4 << endl ;
    else cout << 0 << endl ;
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