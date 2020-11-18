// https://atcoder.jp/contests/abc175/tasks/abc175_b
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

void solve() {
    int n , counter = 0 ;
    cin >> n ;
    vector<int> side (n) ;
    for(auto &x : side) cin >> x ;
    for(int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++ ) {
            for (int k = j + 1 ; k < n ; k++) {
                vector<int> temp ;
                temp.push_back(side[i]) ;
                temp.push_back(side[j]) ;
                temp.push_back(side[k]) ;
                sort(temp.begin() , temp.end()) ;
                if (temp[0] == temp[1] or temp[1] == temp[2] or temp[0] == temp[2]) continue ;
                else if (temp[1] + temp[0] > temp[2]) {
                    counter++ ;
                    // for(auto x : temp) cout << x << " " ;
                    // cout << endl ;
                }
            }
        }
    }
    cout << counter << endl ;
}

int32_t main() {
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while (testcases--) {
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