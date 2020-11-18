#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve() {
    int  n , k  ;
    cin >> n >> k ;
    vector<int> v(n) ; 
    for (auto &x : v) {
        cin >> x ;
    }
    cout << v[k] << endl ;
}

int32_t main() {
   int testcases = 1 ;
   cin >> testcases ;
   while(testcases--) {
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