#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    string s ;
    int x ;
    cin >> s >> x ;
    int n = s.size() ;
    string ans(n, '1') ;
    for(int i = 0 ; i < n ; i++) {
        if (s[i] == '0') {
            if (i - x >= 0)  ans [ i - x ] = '0' ;
            if (i + x < n )  ans [ i + x ] = '0' ; 
        }
    }
    for (int i = 0 ; i < n ; i++) {
        bool flag = false;
        flag = flag || (i - x >= 0 && ans[i - x] == '1');
        flag = flag || (i + x < n && ans[i + x] == '1');
 
        if (s[i] != flag + '0') {
            cout << -1 << '\n';
            return;
        }
    }
    cout << ans << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
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