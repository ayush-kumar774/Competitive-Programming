#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
       int n ;
       cin >> n ;
       string s , t ;
       vector<string> rats ;
       vector<string> women ;
       //vector<string> children ;       
       vector<string> men ;       
       vector<string> captain ;       
        while(n--) {
                cin >> s >> t ;
                if (t == "rat") {
                        rats.push_back(s) ;
                }
                if (t == "woman") {
                        women.push_back(s) ;
                }
                if (t == "child") {
                        women.push_back(s) ;
                }
                if (t == "man") {
                        men.push_back(s) ;
                }
                if (t == "captain") {
                        captain.push_back(s) ;
                }
        }
        for (auto x : rats) cout << x << endl ;
        for (auto x : women) cout << x << endl ;
        //for (auto x : children) cout << x << endl ;
        for (auto x : men) cout << x << endl ;
        for (auto x : captain) cout << x << endl ;
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