#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
       string s ;
       cin >> s ;
       int n = s.size() ;
       if (n == 1) {
               cout << s << endl ;
               return ;
        }
       string ans = "" ; 
       ans += s[n - 1] ;
       char last = s[n - 1] ;
       for (int i = n - 2 ; i >= 0 ; i--) {
               if (s[i] >= last) {
                       last = s[i] ;
                       ans += s[i] ;
               }
       }
       int m = ans.size() ;
       for (int i = m - 1 ; i >= 0 ; i--) {
               cout << ans[i] ;
       }
       cout << endl ;
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