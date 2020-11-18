// https://codeforces.com/contest/1162/problem/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , h , m ;
    cin >> n >> h >> m ;
    vector<int> buildings(n + 1 , h) ;
    for (int i = 0 ; i < m ; i++) {
        int l , r , x ;
        cin >> l >> r >> x;
        for (int i = l ; i <= r ; i++) {
            buildings[i] = min(buildings[i] , x) ;        
        }
    }
    int profit = 0; 
    for (int i = 1 ; i <= n ; i++) {
        profit += buildings[i] * buildings[i] ;
    }
    cout << profit << endl ;
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