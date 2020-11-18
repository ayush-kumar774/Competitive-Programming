// https://codeforces.com/contest/828/problem/B
#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n' 

void solve() {
    int n , m , min_x = 999999999999 , min_y = 999999999999 , max_x = 0, max_y = 0;
    int countBlack = 0 ;
    cin >> n >> m ;
    char mat[n][m] ;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> mat[i][j] ;
            if (mat[i][j] == 'B') {
                max_x = max(max_x , j) ;
                min_x = min(min_x , j) ;
                max_y = max(max_y , i) ;
                min_y = min(min_y , i) ;
                countBlack++ ;
            }
        }
    }
    int s = max(max_x - min_x + 1 , max_y - min_y + 1) ;
    if (countBlack == 0) cout << 1 << endl ;
    else if (s > n or s > m) cout << -1 << endl ;
    else cout << s * s - countBlack << endl ;
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