// https://www.e-olymp.com/en/problems/21

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n, p ;
    cin >> n >> p ;
    double ans = 0 ;
    vector<double> amounts(n) ;
    for(auto &x: amounts) cin >> x ;
    ans = amounts[0] ;
    for(int i = 1 ; i < n ; i++)
    {
        ans += amounts[i] ;
        ans -= (ans * p ) / 100.0f ;
        //cout << ans << endl ;
    }
    cout << ans << endl ;
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
