#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    set<int> s ;
    while(n--) {
        int x ;
        cin >> x ;
        s.insert(x) ;
    }
    vector<int> v(s.begin() , s.end()) ;
    //bool flag =  false ;
    for (int i = 0 ; i < v.size() - 1 ; i++) {
        if ( (v[i + 1] - v[i] ) > 1) {
            cout << "NO" << endl ;
            return ;
        }
    }
    cout << "YES" << endl ;
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