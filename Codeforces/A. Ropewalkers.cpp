// http://codeforces.com/problemset/problem/1185/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
void solve()
{
    vector <int> a (3) ;
    int ans = 0 , d ;
    cin >> a[0] >> a[1] >> a[2] >> d ;
    sort(a.begin(), a.end()) ;
    int b = a[1] - a[0] ;
    int c = a[2] - a[1] ;
    if (b < d) ans += (d - b) ;
    if (c < d) ans += (d - c) ;
    cout << ans << endl ;
}

int32_t main()
{
    fast ;
    int testcases = 1;
    //cin >> testcases ;
    while (testcases--)
    {
        solve();
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