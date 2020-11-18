#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , ans = 0 ;
    cin >> n ;
    char mat[n][n] ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cin >> mat[i][j] ;
        }
    }
    for(int i = 0 ; i < n;  i++) {
        for (int j = 0 ; j < n ; j++) {
            if (mat[i][j] == 'X') {
                if((i - 1) >= 0 && (j - 1) >= 0 && (i + 1) < n && (j + 1) < n ) {
                    if (mat[i][j] == 'X' && mat[i-1][j-1] == 'X' && mat[i+1][j+1] == 'X' && mat[i+1][j-1] == 'X' && mat[i-1][j+1] == 'X') {
                        ans++ ;
                    }
                }
            }
        }
    }
    cout << ans << endl ;
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