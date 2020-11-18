#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
       string str , t ;
       cin >> str >> t ;
       set<char> s ;
       for (auto x : str) s.insert(x) ;
       bool flag = false ;
       for (auto x : t) {
               if (s.find(x) != s.end()) {
                       flag = true ;
               }
       }
       if (flag) cout << "yEs" << endl ;
       else cout << "nO" << endl ;
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