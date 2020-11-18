#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 


void solve() {
    int n , k ;
    cin >> n >> k ;
    set<int> s ;
    while(n--) {
        int x ;
        cin >> x ;
        s.insert(x) ;
    }
    vector<int> v(s.begin() , s.end()) ; 
    int  j = 0;
    cout << v[0] << endl ;
    for (int i = 1 ; i < k  ; i++) {
        cout << v[j + 1] - v[j] << endl ;

    }
}

int32_t main () {
    fast;
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
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