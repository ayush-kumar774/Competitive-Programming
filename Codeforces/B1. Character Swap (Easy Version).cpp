#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
        int n ;
        cin >> n ;
        string s , t ;
        cin >> s >> t ;
        int counter  = 0 ;
        set<char> ss , tt  ;
        for (int i = 0 ; i < n ; i++) {
                if (s[i] != t[i]) {
                        counter++ ;
                        ss.insert(s[i]) ;
                        tt.insert(t[i]) ;
                }
        }
        if(counter != 2) cout << "No" << endl ;
        else if (ss.size() == 1 and tt.size() == 1 and counter == 2) {
                cout << "Yes" << endl ;
        }
        else {
                cout << "No" << endl ;
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