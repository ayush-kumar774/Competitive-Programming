// https://codeforces.com/contest/1043/problem/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for (auto &x : v) cin >> x ;
    int k = *max_element(v.begin() , v.end()) ;
    int diff = 0 ;
    for (int i = 0 ; i < n ; i++) {
        diff -= k - v[i] ;
        diff += v[i] ;
    }
    if (diff >= 0) {
        k += diff / n + 1 ;
    }
    cout << k << endl ;
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