// https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0); cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    int maxIndex , minIndex , maxx = 0 , minn = 999 ;
    vector<int> v(n) ;
    for(auto &x : v) {
        cin >> x ;
        if (maxx < x) {
            maxx = x ; 
        }
        if (minn > x) {
            minn = x ;
        }
    }
    for(int i = 0 ; i < n ; i++) {
        if (maxx == v[i] ) {
            maxIndex = i ;
            break ;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--) {
        if (minn == v[i] ) {
            minIndex = i ;
            break ;
        }
    }

    int ans = abs(0 - maxIndex) + abs( (n - 1) - minIndex) ;
    if(minIndex < maxIndex) ans -= 1 ;
    else ans = ans ;
    cout << ans << endl ;
}

int32_t main()
{
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