#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        int n ;
        string s ;
        cin >> n >> s ;
        if (n & 1) {
                int odd = 0 , even = 0 ;
                for (int i = 0 ; i < n ; i += 2) {
                        if ((s[i] - '0' ) % 2 == 0) even = 1 ;
                        else odd = 1 ;
                }
                if (odd) cout << 1 << endl ;
                else cout << 2 << endl ;
        }
        else {
                int odd = 0 , even = 0 ;
                for (int i = 0 ; i < n ; i += 2) {
                        if ((s[i] - '0' ) % 2 == 0) even = 1 ;
                        else odd = 1 ;
                }
                if (even) cout << 2 << endl ;
                else cout << 1 << endl ;
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

