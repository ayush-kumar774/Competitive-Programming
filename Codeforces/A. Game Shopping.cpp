// https://codeforces.com/problemset/problem/1009/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ,  m ;
    cin >> n >> m ;
    vector<int> v(n) ;
    vector<int> v2(m) ;
    for (auto &x : v) cin >> x ;
    for (auto &x : v2) cin >> x ;
    int ans = 0 ;
    for (int i = 0 , j = 0 ; i < m , j < n ;) {
        if (v2[i] >= v[j]) {
            // cout << v2[i] << endl ;
            i++;
            j++;
            ans++ ;
        }
        else j++ ;
        if(ans == m) break ;
    }
    cout << ans << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0  ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/