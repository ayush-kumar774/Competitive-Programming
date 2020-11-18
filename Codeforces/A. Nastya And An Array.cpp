// https://codeforces.com/problemset/problem/992/A

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n  ,x ;
    cin >> n ;
    set<int> s ;
    for (int i = 0 ; i <  n; i++) {
        cin >> x ;
        if (x != 0)
            s.insert(x) ;
    }
    cout << s.size() << endl ;
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