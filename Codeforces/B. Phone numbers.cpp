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
    if (n % 2 == 0) {
        for (int i = 0 ; i < n ; i += 2) {
            if (i == n - 2) cout << s[i] << s[i + 1] ;
            else cout << s[i] << s[i + 1] << "-" ;
        }
    }
    else {
        if (n == 3) cout << s[0] << s[1] << s[2] ; 
        else {
            cout << s[0] << s[1] << s[2] << "-" ;
            for (int i = 3 ; i < n ; i += 2) {
                if (i == n - 2) cout << s[i] << s[i + 1] ;
                else cout << s[i] << s[i + 1] << "-" ;
            }
        }
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