// https://codeforces.com/problemset/problem/988/A
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) ;
    set<int> s , t ;
    for (auto &x : v) {
        cin >> x ;
        s.insert(x) ;
    }
    if (s.size() >= k) {
        cout << "YES" << endl ;
        vector<int>res(s.begin() , s.end()) ;
        for (int i = 0 ; i < k ; i++) {
            for (int j = 0 ; j < n ; j++) {
                if (res[i] == v[j] ) {
                    t.insert(j+1) ; 
                    break ;
                }
            }
        }
        for (auto x : t) cout << x << " ";
        cout << endl ;
    }
    else {
        cout << "NO" << endl ;
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