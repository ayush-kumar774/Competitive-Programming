#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    if (n % 2 == 0) {
        if ( (n / 2 ) & 1 ) {
            cout << (n / 2) - 2 << " " << n - ((n / 2) - 2) << endl ;
        }
        else cout << (n / 2 ) - 1 << " " << (n / 2 ) + 1 << endl ;
    }
    else {
        cout << (n / 2) << " " << n - (n / 2) << endl ;
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
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/