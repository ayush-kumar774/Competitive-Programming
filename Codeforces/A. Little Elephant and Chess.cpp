#include <bits/stdc++.h>
using namespace std ;
#define int long long 
#define fast ios_base::sync_with_stdio(false) ;
#define endl '\n' 

void solve() {
       string chess[8] ;
       for (int i = 0; i < 8 ; i++) {
               cin >> chess[i] ;
       }
       int adjCount = 0 ;
       for (int i = 0 ; i < 8 ; i++) {
               for (int j = 0 ; j < 8 ; j++) {
                       if (chess[i][j] == chess[i][j+1]) {
                               adjCount++ ;
                       }
                       if (adjCount >= 2) {
                               cout << "NO" << endl ;
                               return ;
                       }
               }
       }
       cout << "YES" << endl ;
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