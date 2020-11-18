#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
       int n ;
       cin >> n ;
       string s ;
       cin >> s ;
       string t = s ;
       sort(t.begin(), t.end()) ;
       if (s == t) {
               cout << "NO" << endl ;
       }
       else {
               char c ;
               int matchIndex = 0, index = 0 ;
                for (int i = 0 ; i < n ; i++) {
                        if (s[i] != t[i]) {
                                c = t[i] ;
                                matchIndex = (i - 1);
                                break ;
                        }
                }
                //cout << c << endl ;
                for (int i = n - 1 ; i >= 0 ; i--) {
                        if (s[i] == c) {
                                index = i;
                                break ;
                        }
                }
                cout << "YES" << endl ;
                cout << matchIndex + 2 << " " << index + 1 << endl ;
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