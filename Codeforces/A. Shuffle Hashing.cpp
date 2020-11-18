#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        string p , h ;
        cin >> p >> h ;
        sort(p.begin() , p.end()) ;
        int n = p.size() , m = h.size() ;
        if (n > m) {
            cout << "NO" << endl ;
        }
        else {
            bool flag = false ;
            for (int i = 0 ; i < m ; i++) {
                if (i + n > m) break ;
                string s = "" ;
                for (int j = i ; j < n + i ; j++) {
                    s += h[j] ;
                } 
                sort(s.begin() , s.end()) ;
                if (s == p) {
                    cout << "YES" << endl ;
                    flag = true ;
                    break ;
                }
        }
        if (!flag) cout << "NO" << endl ; 
    }
}

int32_t main () {
        fast;
        int testcases = 1 ;
        cin >> testcases ;
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