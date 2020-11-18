// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n ;
    cin >> n ;
    string s = "" , s2 ;
    map<int, int> mp ;
    vector<int> v(n) ;
    for (auto &x : v) {
        cin >> x ;
        mp[x]++ ;
        s += to_string(x) ;
    }           
    s2 = s ;
    reverse(s.begin(), s.end()) ;
    if (s == s2) cout << "YES" << endl ;
    else {
        for (int i = 0 ; i < n - 2 ; i++) {
            if ( v[i] == v[i + 2] ) {
                //cout << v[i] << " " << v[i + 2] << endl ;
                cout << "YES" << endl ;
                return ;
            }
        }
        cout << "NO" << endl ;
    }                    
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