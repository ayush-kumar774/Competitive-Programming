#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
       int n , m ;
       cin >> n >> m ;
       string s[n] ;
       for (int i = 0 ; i < n ; i++) {
                cin >> s[i] ;
       }
       vector<char> v ;
       for(int i = 0; i < n; i++) {
		        for(int j = 0; j < m; j++) {
			            int t = 0;
			            for(int k = 0; k < n; k++) {
				                if(s[k][j] == s[i][j]) {
					                    t++;
				                }
			            }
			            for(int k = 0; k < m; k++) {
				                if(s[i][k] == s[i][j]) {
					                    t++;
				                }
			            }
			            if(t == 2) {
				                v.push_back(s[i][j]);
			            }
 
		        }
	    }
       for (auto x : v) cout << x ;
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