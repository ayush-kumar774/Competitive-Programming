// https://codeforces.com/problemset/problem/994/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) , v2(k) ;
    for (auto &x : v) cin >> x ;
    for (auto &x : v2) cin >> x ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < k ; j++) {
            if (v[i] == v2[j] ) {
                cout << v[i] << " " ;
                break ;
            }
        }
    }
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