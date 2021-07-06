// https://codeforces.com/problemset/problem/169/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cain.tie(0); cout.tie(0) ;
#define endl '\n'
 
void solve()
{
    int n , a , b ;
    cin >> n >> a >> b ;
    vector<int> v(n) ;
    for(auto & x : v) cin >> x ;
    sort(v.begin(), v.end()) ;
    cout << abs(v[b - 1] - v [b]) << endl ;
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