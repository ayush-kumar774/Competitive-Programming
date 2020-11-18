#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    int left = 0  , right = 0 ;
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        if (v[i] == 0) left = i + 1 ;
        else right = i + 1 ;
    }
    cout << min(left , right) << endl ;
}

int32_t main() 
{
    fast ;
    int testcases = 1 ;
    //cin >> testcases ;
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